#include <utility>
#include <memory>
#include <string>
#include <tuple>
#include <CppUnitTest.h>
#include <SYMBOL.h>
#include <utilitys.h>
#include "HEADER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace USL::FRONTEND;
namespace USL_COMPILER_TESTS
{
	class CreateInvalidThreadedSymbolTableFixture {
	public:
		static std::atomic_bool threwException;
		static std::atomic_bool reachedEnd;
	static void CreateInvalidThreadedSymbolTable() {
		try {
			SymbolTable symbolTable;

		}
		catch (const NotMainThreadException&) {
			threwException = true;
			return;
		}
		reachedEnd = true;
	}
	};


	TEST_CLASS(SYMBOL_TABLE_TESTS)
	{
	public:
		
		TEST_METHOD(TestCreateSymbolTable) {
			SymbolTable symbolTable;
			Assert::IsNotNull(symbolTable.GetCurrentScope().lock().get());
			Assert::AreEqual(symbolTable.GetCurrentScope().lock()->GetSimpleName(), std::string("global"));
		}
		TEST_METHOD(TestCreateSymbolTableSingleThreadedNotMainThread) {
			
			std::thread t(CreateInvalidThreadedSymbolTableFixture::CreateInvalidThreadedSymbolTable);
			t.join();
			Assert::IsTrue(CreateInvalidThreadedSymbolTableFixture::threwException);
			Assert::IsFalse(CreateInvalidThreadedSymbolTableFixture::reachedEnd);
		
		}
		TEST_METHOD(TestScopeInsertionValid) {
						SymbolTable symbolTable;
			bool succses=symbolTable.InsertScope("MyScope");
			Assert::IsTrue(succses);
			Assert::AreEqual(symbolTable.GetCurrentScope().lock()->GetSimpleName(), std::string("MyScope"));
			Assert::AreEqual(symbolTable.GetCurrentScope().lock()->GetParentScope().lock()->GetSimpleName(), std::string("global"));
			Assert::AreEqual(symbolTable.GetCurrentScope().lock()->GetParentScope().lock()->GetChildScopes().size(), 1ULL);
		}
		TEST_METHOD(TestNestedScopeInsertionValid) {
			SymbolTable symbolTable;
			bool succses = symbolTable.InsertScope("MyScope1");
			Assert::IsTrue(succses);
			succses = symbolTable.InsertScope("MyScope2");
			Assert::IsTrue(succses);
			succses = symbolTable.InsertScope("MyScope3");
			Assert::IsTrue(succses);
			//now check that the parrents are correct
			//starting with the current scopoe
			Assert::AreEqual(std::string("MyScope3"), symbolTable.GetCurrentScope().lock()->GetSimpleName());
			Assert::AreEqual(std::string("MyScope2"), symbolTable.GetCurrentScope().lock()->GetParentScope().lock()->GetSimpleName());
			Assert::AreEqual(std::string("MyScope1"), symbolTable.GetCurrentScope().lock()->GetParentScope().lock()->GetParentScope().lock()->GetSimpleName());
			Assert::AreEqual(std::string("global"), symbolTable.GetCurrentScope().lock()->GetParentScope().lock()->GetParentScope().lock()->GetParentScope().lock()->GetSimpleName());
		}
		
		TEST_METHOD(TestScopeInsertionInvalid) {
			SymbolTable symbolTable;
			bool succses =symbolTable.InsertScope("MyScope");

			std::ignore = symbolTable.ExitScope();
	
			 succses = symbolTable.InsertScope("MyScope");
			 Assert::IsTrue(succses==false);

		}
		TEST_METHOD(TestExitScopeValid) {
			SymbolTable symbolTable;
			 std::ignore= symbolTable.InsertScope("MyScope");

			 bool succses=symbolTable.ExitScope();


			Assert::IsTrue(succses );
			Assert::AreEqual(symbolTable.GetCurrentScope().lock()->GetSimpleName(), std::string("global"));
		}
		TEST_METHOD(TestExitScopeInvalid) {
			SymbolTable symbolTable;

			bool succses = symbolTable.ExitScope();


			Assert::IsTrue(succses==false);
		}
		TEST_METHOD(TestEnterScopeValid) {
			SymbolTable symbolTable;
			std::ignore = symbolTable.InsertScope("MyScope");
			std::ignore = symbolTable.ExitScope();
			bool sucsess = symbolTable.EnterScope("MyScope");
			Assert::IsTrue(sucsess);
			Assert::AreEqual(symbolTable.GetCurrentScope().lock()->GetSimpleName(),std::string( "MyScope"));
		}
		TEST_METHOD(TestEnterScopeInvalid) {
			SymbolTable symbolTable;
			std::ignore = symbolTable.InsertScope("MyScope");
			std::ignore = symbolTable.ExitScope();
			bool sucsess = symbolTable.EnterScope("NonExistingScope");
			Assert::IsTrue(sucsess==false);
			Assert::AreEqual(symbolTable.GetCurrentScope().lock()->GetSimpleName(), std::string("global"));
		}
		TEST_METHOD(TestInsertSymbolValid){
		SymbolTable symbolTable;
			auto symbol = std::make_unique<VariableSymbol>();
			std::string symbolName = "myVar";
			bool succses = symbolTable.InsertSymbol(std::move(symbol), symbolName);
			Assert::IsTrue(succses);

		}
	};
	std::atomic_bool CreateInvalidThreadedSymbolTableFixture::threwException = false;
	std::atomic_bool CreateInvalidThreadedSymbolTableFixture::reachedEnd = false;
}
