#include "HEADER/COMPILER/FRONTEND/ERROR_TABLE/ERROR_TABLE.h"
namespace USL_COMPILER
{
	std::atomic_bool ErrorTable::has_syntactic_error{ false };
	std::atomic_bool ErrorTable::has_semantic_error{ false };
	std::vector<ErrorPtr> ErrorTable::errors{};
	bool ErrorTable::hasSyntacticError()  noexcept {
		return has_syntactic_error.load();
	}
	bool ErrorTable::hasSemanticError()  noexcept {
		return has_semantic_error.load();
	}
	std::string ErrorTable::AllErrorsToString()  noexcept
	{
		std::stringstream ss;
		for(const auto& error : errors) {
			if (error) {
				ss << error->ToString() << "\n";
			}
		}
		return ss.str();
	}

	bool ErrorTable::ResetErrorTable() noexcept
	{
	
		if (errors.empty()) {
			return true;
		}
		else {
						has_syntactic_error.store(false);
			has_semantic_error.store(false);
			errors.clear();
			return true;
		}
	}

	void ErrorTable::AddError(ErrorPtr error,ErrorType type) 
	{
		if (error) {
			switch (type)
			{
			case USL_COMPILER::ErrorType::SYNTAX_ERROR:
			{
				has_syntactic_error.store(true);
				break;
			}
			case USL_COMPILER::ErrorType::SEMANTIC_ERROR:
			{
				has_semantic_error.store(true);
				break;
			}
			default:
			{
				break;
			}
			}
			errors.push_back(std::move(error));
		}
		else{
			throw std::invalid_argument("Error pointer cannot be null.");
		}
	}



	Error::Error(ErrorType type, std::string message, size_t line_number, size_t column_number) noexcept
		: type(type), message(std::move(message)), line_number(line_number), column_number(column_number) {
	}




	SyntacticError::SyntacticError(std::string message, size_t line_number, size_t column_number) noexcept
		: Error(ErrorType::SYNTAX_ERROR, std::move(message), line_number, column_number) {
	}
	std::string SyntacticError::ToString() const noexcept
	{
	
			return "Syntax Error: " + message + " at line " + std::to_string(line_number) + ", column " + std::to_string(column_number);
		

	}
	SemanticError::SemanticError(std::string message, size_t line_number, size_t column_number) noexcept
		: Error(ErrorType::SEMANTIC_ERROR, std::move(message), line_number, column_number)
	{
	}
	std::string SemanticError::ToString() const noexcept
	{
			return "Semantic Error: " + message + " at line " + std::to_string(line_number) + ", column " + std::to_string(column_number);

	}
}