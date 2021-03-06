#include "../lexertl/rules.hpp"

enum cpp_id {T_ERROR,
    T_AND_ALT = 1,
    T_ANDASSIGN_ALT,
    T_ANDAND_ALT,
    T_OR_ALT,
    T_ORASSIGN_ALT,
    T_OROR_ALT,
    T_XORASSIGN_ALT,
    T_XOR_ALT,
    T_NOTEQUAL_ALT,
    T_NOT_ALT,
    T_COMPL_ALT,
    T_IMPORT,
    T_ARROWSTAR,
    T_DOTSTAR,
    T_COLON_COLON,
    T_AND,
    T_ANDAND,
    T_ASSIGN,
    T_ANDASSIGN,
    T_OR,
    T_OR_TRIGRAPH,
    T_ORASSIGN,
    T_ORASSIGN_TRIGRAPH,
    T_XOR,
    T_XOR_TRIGRAPH,
    T_XORASSIGN,
    T_XORASSIGN_TRIGRAPH,
    T_COMMA,
    T_COLON,
    T_DIVIDEASSIGN,
    T_DIVIDE,
    T_DOT,
    T_ELLIPSIS,
    T_EQUAL,
    T_GREATER,
    T_GREATEREQUAL,
    T_LEFTBRACE,
    T_LEFTBRACE_ALT,
    T_LEFTBRACE_TRIGRAPH,
    T_LESS,
    T_LESSEQUAL,
    T_LEFTPAREN,
    T_LEFTBRACKET,
    T_LEFTBRACKET_ALT,
    T_LEFTBRACKET_TRIGRAPH,
    T_MINUS,
    T_MINUSASSIGN,
    T_MINUSMINUS,
    T_PERCENT,
    T_PERCENTASSIGN,
    T_NOT,
    T_NOTEQUAL,
    T_OROR,
    T_OROR_TRIGRAPH,
    T_PLUS,
    T_PLUSASSIGN,
    T_PLUSPLUS,
    T_ARROW,
    T_QUESTION_MARK,
    T_RIGHTBRACE,
    T_RIGHTBRACE_ALT,
    T_RIGHTBRACE_TRIGRAPH,
    T_RIGHTPAREN,
    T_RIGHTBRACKET,
    T_RIGHTBRACKET_ALT,
    T_RIGHTBRACKET_TRIGRAPH,
    T_SEMICOLON,
    T_SHIFTLEFT,
    T_SHIFTLEFTASSIGN,
    T_SHIFTRIGHT,
    T_SHIFTRIGHTASSIGN,
    T_STAR,
    T_COMPL,
    T_COMPL_TRIGRAPH,
    T_STARASSIGN,
    T_ASM,
    T_AUTO,
    T_BOOL,
    T_FALSE,
    T_TRUE,
    T_BREAK,
    T_CASE,
    T_CATCH,
    T_CHAR,
    T_CLASS,
    T_CONST,
    T_CONSTCAST,
    T_CONTINUE,
    T_DEFAULT,
    T_DELETE,
    T_DO,
    T_DOUBLE,
    T_DYNAMICCAST,
    T_ELSE,
    T_ENUM,
    T_EXPLICIT,
    T_EXPORT,
    T_EXTERN,
    T_FLOAT,
    T_FOR,
    T_FRIEND,
    T_GOTO,
    T_IF,
    T_INLINE,
    T_INT,
    T_LONG,
    T_MUTABLE,
    T_NAMESPACE,
    T_NEW,
    T_OPERATOR,
    T_PRIVATE,
    T_PROTECTED,
    T_PUBLIC,
    T_REGISTER,
    T_REINTERPRETCAST,
    T_RETURN,
    T_SHORT,
    T_SIGNED,
    T_SIZEOF,
    T_STATIC,
    T_STATICCAST,
    T_STRUCT,
    T_SWITCH,
    T_TEMPLATE,
    T_THIS,
    T_THROW,
    T_TRY,
    T_TYPEDEF,
    T_TYPEID,
    T_TYPENAME,
    T_UNION,
    T_UNSIGNED,
    T_USING,
    T_VIRTUAL,
    T_VOID,
    T_VOLATILE,
    T_WCHART,
    T_WHILE,
    T_PP_DEFINE,
    T_PP_IF,
    T_PP_IFDEF,
    T_PP_IFNDEF,
    T_PP_ELSE,
    T_PP_ELIF,
    T_PP_ENDIF,
    T_PP_ERROR,
    T_PP_QHEADER,
    T_PP_HHEADER,
    T_PP_INCLUDE,
    T_PP_LINE,
    T_PP_PRAGMA,
    T_PP_UNDEF,
    T_PP_WARNING,
    T_MSEXT_INT8,
    T_MSEXT_INT16,
    T_MSEXT_INT32,
    T_MSEXT_INT64,
    T_MSEXT_BASED,
    T_MSEXT_DECLSPEC,
    T_MSEXT_CDECL,
    T_MSEXT_FASTCALL,
    T_MSEXT_STDCALL,
    T_MSEXT_TRY,
    T_MSEXT_EXCEPT,
    T_MSEXT_FINALLY,
    T_MSEXT_LEAVE,
    T_MSEXT_INLINE,
    T_MSEXT_ASM,
    T_MSEXT_PP_REGION,
    T_MSEXT_PP_ENDREGION,
    T_LONGINTLIT,
    T_INTLIT,
    T_FLOATLIT,
    T_IDENTIFIER,
    T_CCOMMENT,
    T_CPPCOMMENT,
    T_CHARLIT,
    T_STRINGLIT,
    T_SPACE,
    T_SPACE2,
    T_CONTLINE,
    T_NEWLINE,
    T_POUND_POUND,
    T_POUND_POUND_ALT,
    T_POUND_POUND_TRIGRAPH,
    T_POUND,
    T_POUND_ALT,
    T_POUND_TRIGRAPH,
    T_ANY_TRIGRAPH,
    T_ANY,
    T_ALIGNAS,
    T_ALIGNOF,
    T_CHAR16_T,
    T_CHAR32_T,
    T_CONSTEXPR,
    T_DECLTYPE,
    T_NOEXCEPT,
    T_NULLPTR,
    T_STATICASSERT,
    T_THREADLOCAL,
    T_RAWSTRINGLIT,
    T_BS_NEWLINE};

struct macro_pair
{
	const char *_name;
	const char *_regex;
};

struct rule_pair
{
	const char *_regex;
	std::size_t _id;
};

void build_cpp(lexertl::rules &rules_);
void build_rev_cpp(lexertl::rules &rules_);
