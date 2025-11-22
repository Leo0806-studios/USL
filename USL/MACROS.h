#pragma once
#define RuleOfFive(TypeName)                     \
	TypeName() = default;                          \
	TypeName(const TypeName& other) = default;    \
	TypeName& operator=(const TypeName& other) = default; \
	TypeName(TypeName&& other) noexcept = default; \
	TypeName& operator=(TypeName&& other) noexcept = default; \
	~TypeName() = default;