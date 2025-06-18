#pragma once
#ifndef ERROR_TABLE_H
#define ERROR_TABLE_H
import std;
namespace USL_COMPILER {
	enum class ErrorType {
		SYNTAX_ERROR,
		SEMANTIC_ERROR
	};
	class Error{//NOSONAR
	protected:
		ErrorType type = {};
		std::string message = {};
		size_t line_number=0;
		size_t column_number=0;

	public:
		Error(ErrorType type, std::string message, size_t line_number, size_t column_number) noexcept;
		virtual std::string ToString() const noexcept = 0;
		virtual ~Error() = default;
	};
	using ErrorPtr = std::shared_ptr<Error>;
	class SyntacticError : public Error {
	public:
		SyntacticError(std::string message, size_t line_number, size_t column_number) noexcept;
		

		// Inherited via Error
		std::string ToString() const noexcept override;

	};
	class SemanticError : public Error {
		public:
		SemanticError(std::string message, size_t line_number, size_t column_number) noexcept;
		
		// Inherited via Error
		std::string ToString() const noexcept override;
	};
	class ErrorTable {
		static std::atomic_bool has_syntactic_error;
		static std::atomic_bool has_semantic_error;
		static std::vector<ErrorPtr> errors;
	public:
		static bool hasSyntacticError()  noexcept;
		static bool hasSemanticError()  noexcept;
		static std::string AllErrorsToString()  noexcept;
		static bool ResetErrorTable() noexcept;
		static void AddError(ErrorPtr error,ErrorType type) ;
		ErrorTable() = delete;

	};
}
#endif // !ERROR_TABLE_H
