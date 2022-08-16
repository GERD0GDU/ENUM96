/************************************************************************
* ENUM96.inl
*
* Gokhan ERDOGDU
* 26.12.2016 (dd.MM.yyyy)
*
***********************************************************************/
#pragma once

#ifndef __JLL_ENUM96_INL__
#define __JLL_ENUM96_INL__

#include <tchar.h>      // For size_t, _tcscspn, _tcsncpy_s.
#include <wtypes.h>     // For LPTSTR
#include <typeinfo>     // For typeid(variable).name()
#include <stdexcept>    // For runtime_error.

// A "typical" mapping macro. MAP(macro, a, b, c, ...) expands to
// macro(a) macro(b) macro(c) ...
// The helper macro COUNT(a, b, c, ...) expands to the number of
// arguments, and IDENTITY(x) is needed to control the order of
// expansion of __VA_ARGS__ on Visual C++ compilers.
#define MAP(macro, ...) \
    IDENTITY( \
        APPLY(CHOOSE_MAP_START, COUNT(__VA_ARGS__)) \
            (macro, __VA_ARGS__))

#define CHOOSE_MAP_START(count) MAP ## count

#define APPLY(macro, ...) IDENTITY(macro(__VA_ARGS__))

#define IDENTITY(x) x

// max member count is 128 in Visual C++ compilers
#define MAP1(m, x)        m(x)
#define MAP2(m, x, ...)   m(x) IDENTITY(MAP1(m, __VA_ARGS__))
#define MAP3(m, x, ...)   m(x) IDENTITY(MAP2(m, __VA_ARGS__))
#define MAP4(m, x, ...)   m(x) IDENTITY(MAP3(m, __VA_ARGS__))
#define MAP5(m, x, ...)   m(x) IDENTITY(MAP4(m, __VA_ARGS__))
#define MAP6(m, x, ...)   m(x) IDENTITY(MAP5(m, __VA_ARGS__))
#define MAP7(m, x, ...)   m(x) IDENTITY(MAP6(m, __VA_ARGS__))
#define MAP8(m, x, ...)   m(x) IDENTITY(MAP7(m, __VA_ARGS__))
#define MAP9(m, x, ...)   m(x) IDENTITY(MAP8(m, __VA_ARGS__))
#define MAP10(m, x, ...)  m(x) IDENTITY(MAP9(m, __VA_ARGS__))
#define MAP11(m, x, ...)  m(x) IDENTITY(MAP10(m, __VA_ARGS__))
#define MAP12(m, x, ...)  m(x) IDENTITY(MAP11(m, __VA_ARGS__))
#define MAP13(m, x, ...)  m(x) IDENTITY(MAP12(m, __VA_ARGS__))
#define MAP14(m, x, ...)  m(x) IDENTITY(MAP13(m, __VA_ARGS__))
#define MAP15(m, x, ...)  m(x) IDENTITY(MAP14(m, __VA_ARGS__))
#define MAP16(m, x, ...)  m(x) IDENTITY(MAP15(m, __VA_ARGS__))
#define MAP17(m, x, ...)  m(x) IDENTITY(MAP16(m, __VA_ARGS__))
#define MAP18(m, x, ...)  m(x) IDENTITY(MAP17(m, __VA_ARGS__))
#define MAP19(m, x, ...)  m(x) IDENTITY(MAP18(m, __VA_ARGS__))
#define MAP20(m, x, ...)  m(x) IDENTITY(MAP19(m, __VA_ARGS__))
#define MAP21(m, x, ...)  m(x) IDENTITY(MAP20(m, __VA_ARGS__))
#define MAP22(m, x, ...)  m(x) IDENTITY(MAP21(m, __VA_ARGS__))
#define MAP23(m, x, ...)  m(x) IDENTITY(MAP22(m, __VA_ARGS__))
#define MAP24(m, x, ...)  m(x) IDENTITY(MAP23(m, __VA_ARGS__))
#define MAP25(m, x, ...)  m(x) IDENTITY(MAP24(m, __VA_ARGS__))
#define MAP26(m, x, ...)  m(x) IDENTITY(MAP25(m, __VA_ARGS__))
#define MAP27(m, x, ...)  m(x) IDENTITY(MAP26(m, __VA_ARGS__))
#define MAP28(m, x, ...)  m(x) IDENTITY(MAP27(m, __VA_ARGS__))
#define MAP29(m, x, ...)  m(x) IDENTITY(MAP28(m, __VA_ARGS__))
#define MAP30(m, x, ...)  m(x) IDENTITY(MAP29(m, __VA_ARGS__))
#define MAP31(m, x, ...)  m(x) IDENTITY(MAP30(m, __VA_ARGS__))
#define MAP32(m, x, ...)  m(x) IDENTITY(MAP31(m, __VA_ARGS__))
#define MAP33(m, x, ...)  m(x) IDENTITY(MAP32(m, __VA_ARGS__))
#define MAP34(m, x, ...)  m(x) IDENTITY(MAP33(m, __VA_ARGS__))
#define MAP35(m, x, ...)  m(x) IDENTITY(MAP34(m, __VA_ARGS__))
#define MAP36(m, x, ...)  m(x) IDENTITY(MAP35(m, __VA_ARGS__))
#define MAP37(m, x, ...)  m(x) IDENTITY(MAP36(m, __VA_ARGS__))
#define MAP38(m, x, ...)  m(x) IDENTITY(MAP37(m, __VA_ARGS__))
#define MAP39(m, x, ...)  m(x) IDENTITY(MAP38(m, __VA_ARGS__))
#define MAP40(m, x, ...)  m(x) IDENTITY(MAP39(m, __VA_ARGS__))
#define MAP41(m, x, ...)  m(x) IDENTITY(MAP40(m, __VA_ARGS__))
#define MAP42(m, x, ...)  m(x) IDENTITY(MAP41(m, __VA_ARGS__))
#define MAP43(m, x, ...)  m(x) IDENTITY(MAP42(m, __VA_ARGS__))
#define MAP44(m, x, ...)  m(x) IDENTITY(MAP43(m, __VA_ARGS__))
#define MAP45(m, x, ...)  m(x) IDENTITY(MAP44(m, __VA_ARGS__))
#define MAP46(m, x, ...)  m(x) IDENTITY(MAP45(m, __VA_ARGS__))
#define MAP47(m, x, ...)  m(x) IDENTITY(MAP46(m, __VA_ARGS__))
#define MAP48(m, x, ...)  m(x) IDENTITY(MAP47(m, __VA_ARGS__))
#define MAP49(m, x, ...)  m(x) IDENTITY(MAP48(m, __VA_ARGS__))
#define MAP50(m, x, ...)  m(x) IDENTITY(MAP49(m, __VA_ARGS__))
#define MAP51(m, x, ...)  m(x) IDENTITY(MAP50(m, __VA_ARGS__))
#define MAP52(m, x, ...)  m(x) IDENTITY(MAP51(m, __VA_ARGS__))
#define MAP53(m, x, ...)  m(x) IDENTITY(MAP52(m, __VA_ARGS__))
#define MAP54(m, x, ...)  m(x) IDENTITY(MAP53(m, __VA_ARGS__))
#define MAP55(m, x, ...)  m(x) IDENTITY(MAP54(m, __VA_ARGS__))
#define MAP56(m, x, ...)  m(x) IDENTITY(MAP55(m, __VA_ARGS__))
#define MAP57(m, x, ...)  m(x) IDENTITY(MAP56(m, __VA_ARGS__))
#define MAP58(m, x, ...)  m(x) IDENTITY(MAP57(m, __VA_ARGS__))
#define MAP59(m, x, ...)  m(x) IDENTITY(MAP58(m, __VA_ARGS__))
#define MAP60(m, x, ...)  m(x) IDENTITY(MAP59(m, __VA_ARGS__))
#define MAP61(m, x, ...)  m(x) IDENTITY(MAP60(m, __VA_ARGS__))
#define MAP62(m, x, ...)  m(x) IDENTITY(MAP61(m, __VA_ARGS__))
#define MAP63(m, x, ...)  m(x) IDENTITY(MAP62(m, __VA_ARGS__))
#define MAP64(m, x, ...)  m(x) IDENTITY(MAP63(m, __VA_ARGS__))
#define MAP65(m, x, ...)  m(x) IDENTITY(MAP64(m, __VA_ARGS__))
#define MAP66(m, x, ...)  m(x) IDENTITY(MAP65(m, __VA_ARGS__))
#define MAP67(m, x, ...)  m(x) IDENTITY(MAP66(m, __VA_ARGS__))
#define MAP68(m, x, ...)  m(x) IDENTITY(MAP67(m, __VA_ARGS__))
#define MAP69(m, x, ...)  m(x) IDENTITY(MAP68(m, __VA_ARGS__))
#define MAP70(m, x, ...)  m(x) IDENTITY(MAP69(m, __VA_ARGS__))
#define MAP71(m, x, ...)  m(x) IDENTITY(MAP70(m, __VA_ARGS__))
#define MAP72(m, x, ...)  m(x) IDENTITY(MAP71(m, __VA_ARGS__))
#define MAP73(m, x, ...)  m(x) IDENTITY(MAP72(m, __VA_ARGS__))
#define MAP74(m, x, ...)  m(x) IDENTITY(MAP73(m, __VA_ARGS__))
#define MAP75(m, x, ...)  m(x) IDENTITY(MAP74(m, __VA_ARGS__))
#define MAP76(m, x, ...)  m(x) IDENTITY(MAP75(m, __VA_ARGS__))
#define MAP77(m, x, ...)  m(x) IDENTITY(MAP76(m, __VA_ARGS__))
#define MAP78(m, x, ...)  m(x) IDENTITY(MAP77(m, __VA_ARGS__))
#define MAP79(m, x, ...)  m(x) IDENTITY(MAP78(m, __VA_ARGS__))
#define MAP80(m, x, ...)  m(x) IDENTITY(MAP79(m, __VA_ARGS__))
#define MAP81(m, x, ...)  m(x) IDENTITY(MAP80(m, __VA_ARGS__))
#define MAP82(m, x, ...)  m(x) IDENTITY(MAP81(m, __VA_ARGS__))
#define MAP83(m, x, ...)  m(x) IDENTITY(MAP82(m, __VA_ARGS__))
#define MAP84(m, x, ...)  m(x) IDENTITY(MAP83(m, __VA_ARGS__))
#define MAP85(m, x, ...)  m(x) IDENTITY(MAP84(m, __VA_ARGS__))
#define MAP86(m, x, ...)  m(x) IDENTITY(MAP85(m, __VA_ARGS__))
#define MAP87(m, x, ...)  m(x) IDENTITY(MAP86(m, __VA_ARGS__))
#define MAP88(m, x, ...)  m(x) IDENTITY(MAP87(m, __VA_ARGS__))
#define MAP89(m, x, ...)  m(x) IDENTITY(MAP88(m, __VA_ARGS__))
#define MAP90(m, x, ...)  m(x) IDENTITY(MAP89(m, __VA_ARGS__))
#define MAP91(m, x, ...)  m(x) IDENTITY(MAP90(m, __VA_ARGS__))
#define MAP92(m, x, ...)  m(x) IDENTITY(MAP91(m, __VA_ARGS__))
#define MAP93(m, x, ...)  m(x) IDENTITY(MAP92(m, __VA_ARGS__))
#define MAP94(m, x, ...)  m(x) IDENTITY(MAP93(m, __VA_ARGS__))
#define MAP95(m, x, ...)  m(x) IDENTITY(MAP94(m, __VA_ARGS__))
#define MAP96(m, x, ...)  m(x) IDENTITY(MAP95(m, __VA_ARGS__))

#define EVALUATE_COUNT( \
	_001, _002, _003, _004, _005, _006, _007, _008, _009, _010, _011, _012, _013, _014, _015, _016, \
	_017, _018, _019, _020, _021, _022, _023, _024, _025, _026, _027, _028, _029, _030, _031, _032, \
	_033, _034, _035, _036, _037, _038, _039, _040, _041, _042, _043, _044, _045, _046, _047, _048, \
	_049, _050, _051, _052, _053, _054, _055, _056, _057, _058, _059, _060, _061, _062, _063, _064, \
	_065, _066, _067, _068, _069, _070, _071, _072, _073, _074, _075, _076, _077, _078, _079, _080, \
	_081, _082, _083, _084, _085, _086, _087, _088, _089, _090, _091, _092, _093, _094, _095, _096, \
	count, ...)    count
    
#define COUNT(...) \
    IDENTITY(EVALUATE_COUNT(__VA_ARGS__, \
	96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, \
    80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, \
    64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, \
    48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, \
    32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, \
    16, 15, 14, 13, 12, 11, 10,  9,  8,  7,  6,  5,  4,  3,  2,  1 \
    ))

// The type "T" mentioned above that drops assignment operations.
template <typename U>
struct ignore_assign {
	explicit ignore_assign(U value) : _value(value) { }
	operator U() const { return _value; }

	const ignore_assign& operator =(int dummy) const
	{
		return *this;
	}

	U   _value;
};



// Prepends "(ignore_assign<_underlying>)" to each argument.
#define IGNORE_ASSIGN_SINGLE(e) (ignore_assign<_underlying>)e,
#define IGNORE_ASSIGN(...) \
    IDENTITY(MAP(IGNORE_ASSIGN_SINGLE, __VA_ARGS__))

// Stringizes each argument.
#if defined(UNICODE) || defined(_UNICODE)
#define STRINGIZE_SINGLE(e) L#e,
#else
#define STRINGIZE_SINGLE(e) #e,
#endif
#define STRINGIZE(...) IDENTITY(MAP(STRINGIZE_SINGLE, __VA_ARGS__))



// Some helpers needed for FromString.
const TCHAR    terminators[] = _T(" =\t\r\n");

// The size of terminators includes the implicit '\0'.
inline bool is_terminator(TCHAR c, size_t index = 0)
{
	return
		index >= _countof(terminators) ? false :
		c == terminators[index] ? true :
		is_terminator(c, index + 1);
}

inline bool matches_untrimmed(const TCHAR *untrimmed, const TCHAR *s, bool ignore_case = false, size_t index = 0)
{
	return
		is_terminator(untrimmed[index]) ? s[index] == _T('\0') :
		(ignore_case ? (_totupper(s[index]) != _totupper(untrimmed[index])) : (s[index] != untrimmed[index])) ? false :
		matches_untrimmed(untrimmed, s, ignore_case, index + 1);
}

// auto dispose string array
struct safe_string_array {
	safe_string_array(size_t size) : _size(size), _str_array(NULL) {
		if (_size > 0) {
			_str_array = new LPTSTR[size];
			for (size_t i = 0; i < size; i++)
				_str_array[i] = NULL;
		}
	}
	~safe_string_array() {
		if (NULL != _str_array) {
			for (size_t i = 0; i < _size; i++)
				delete (_str_array[i]);
			delete _str_array;
			_str_array = NULL;
		}
	}

	LPTSTR& operator[](size_t index) {
		return _str_array[index];
	}

	size_t     _size;
	LPTSTR     *_str_array;
};

// The macro proper.
//
// There are several "simplifications" in this implementation, for the
// sake of brevity. First, we have only one viable option for declaring
// constexpr arrays: at namespace scope. This probably should be done
// two namespaces deep: one namespace that is likely to be unique for
// our little enum "library", then inside it a namespace whose name is
// based on the name of the enum to avoid collisions with other enums.
// I am using only one level of nesting.
//
// Declaring constexpr arrays inside the struct is not viable because
// they will need out-of-line definitions, which will result in
// duplicate symbols when linking. This can be solved with weak
// symbols, but that is compiler- and system-specific. It is not
// possible to declare constexpr arrays as static variables in
// constexpr functions due to the restrictions on such functions.
//
// Note that this prevents the use of this macro anywhere except at
// namespace scope. Ironically, the C++98 version of this, which can
// declare static arrays inside static member functions, is actually
// more flexible in this regard. It is shown in the CodeProject
// article.
//
// Second, for compilation performance reasons, it is best to separate
// the macro into a "parametric" portion, and the portion that depends
// on knowing __VA_ARGS__, and factor the former out into a template.
//
// Third, this code uses a default parameter in FromString that may
// be better not exposed in the public interface.

#define ENUM96(EnumName, Underlying, ...)                                 \
namespace data_ ## EnumName {                                             \
    using _underlying = Underlying;                                       \
    enum { __VA_ARGS__ };                                                 \
                                                                          \
    const size_t           _size =                                        \
        IDENTITY(COUNT(__VA_ARGS__));                                     \
                                                                          \
    const _underlying      _values[] =                                    \
        { IDENTITY(IGNORE_ASSIGN(__VA_ARGS__)) };                         \
                                                                          \
    const TCHAR * const     _raw_names[] =                                \
        { IDENTITY(STRINGIZE(__VA_ARGS__)) };                             \
}                                                                         \
                                                                          \
struct EnumName {                                                         \
    using _underlying = Underlying;                                       \
    enum _enum : _underlying { __VA_ARGS__ };                             \
																		  \
	__declspec(property(get=get_Value))                                   \
        _underlying Value;                                                \
    _underlying get_Value(void) const { return _value; }                  \
	                                                                      \
    const TCHAR * ToString() const                                        \
    {                                                                     \
		int ndx;                                                          \
        ndx = EnumName::IndexOfMember((EnumName)_value);                  \
		if (ndx != -1) {                                                  \
		    return _trimmed_names()[ndx];                                 \
		}                                                                 \
                                                                          \
        if (!EnumName::_is_contains_flags()) {                            \
		    return _to_value(_value);                                     \
        }                                                                 \
		                                                                  \
	    static TCHAR tszValue[1024] = { 0x0 };                            \
		const TCHAR *lpctName;                                            \
		int nLen = 0, nNameLen;                                           \
	    _underlying  val = _value;                                        \
        for (size_t index = 0; index < data_ ## EnumName::_size;          \
             ++index)                                                     \
        {                                                                 \
            if (val & data_ ## EnumName::_values[index])                  \
			{                                                             \
				val &= ~data_ ## EnumName::_values[index];                \
                lpctName = _trimmed_names()[index];                       \
				nNameLen = (int)_tcslen(lpctName);                        \
				if (nLen > 0) {                                           \
				    if ((nLen + nNameLen + 3) >= 1024) {                  \
					    nLen = 0; break;                                  \
					}                                                     \
					nLen += _stprintf_s(&tszValue[nLen], 1024 - nLen,     \
                                        _T(" | %s"), lpctName);           \
				}                                                         \
				else {                                                    \
				    nLen += _stprintf_s(tszValue, 1024,                   \
                                        _T("%s"), lpctName);              \
				}                                                         \
			}                                                             \
	    }                                                                 \
		                                                                  \
		if (val != 0) {                                                   \
            lpctName = _to_value(val);                                    \
			nNameLen = (int)_tcslen(lpctName);                            \
			if (nLen > 0) {                                               \
				if ((nLen + nNameLen + 3) >= 1024) {                      \
					return _to_value(_value);                             \
				}                                                         \
				nLen += _stprintf_s(&tszValue[nLen], 1024 - nLen,         \
                                    _T(" | %s"), lpctName);               \
			}                                                             \
			else {                                                        \
				nLen += _stprintf_s(tszValue, 1024,                       \
                                    _T("%s"), lpctName);                  \
			}                                                             \
		}                                                                 \
		                                                                  \
        return (nLen > 0) ? tszValue : _to_value(_value);                 \
    }                                                                     \
	                                                                      \
    int ToUInt8() const { return (unsigned char)_value; }			      \
                                                                          \
    int ToInt32() const { return (int)_value; }							  \
	                                                                      \
    int ToUInt32() const { return (unsigned int)_value; }				  \
	                                                                      \
	bool HasFlag(const EnumName& flag) const {                            \
	    return ((_value & flag._value) == flag._value);                   \
	}                                                                     \
	                                                                      \
	bool IsDefault() const												  \
	{                                                                     \
		return (_value == data_ ## EnumName::_values[0]);                 \
	}                                                                     \
                                                                          \
	static EnumName Default() {											  \
		return (EnumName)(_enum)data_ ## EnumName::_values[0];            \
	}                                                                     \
																		  \
    static EnumName Parse(const TCHAR *s, bool ignore_case)               \
    {                                                                     \
	    if ((NULL == s) || (_tcslen(s) == 0))                             \
		    throw std::runtime_error("invalid identifier");               \
			                                                              \
		__int64 result = 0;                                               \
		TCHAR tszValue[256];                                              \
		int nLen = 0;                                                     \
		const TCHAR *lpctBegin = s;                                       \
		const TCHAR *lpctEnd = s;                                         \
		while ((NULL != lpctBegin) && (NULL != lpctEnd)) {                \
            while(*lpctBegin == _T(' ')) lpctBegin++; /* Trim left */     \
		    lpctEnd = _tcsstr(lpctBegin, _T("|"));                        \
			if (NULL == lpctEnd) {                                        \
                nLen = (int)_tcslen(lpctBegin);                           \
			}                                                             \
			else {                                                        \
			    nLen = (int)(lpctEnd - lpctBegin);                        \
			}                                                             \
			if (nLen > 0) {                                               \
			    _tcsncpy_s(tszValue, 256, lpctBegin, nLen);               \
				tszValue[nLen] = _T('\0'); /* EOF string */               \
                while(tszValue[nLen - 1] == _T(' ')) {                    \
                    tszValue[--nLen] = _T('\0');                          \
				}                                                         \
				if (nLen > 0) {                                           \
					if (_istdigit(tszValue[0])) {                         \
					    if ((_tcsstr(tszValue, _T("x")) != NULL) ||       \
						    (_tcsstr(tszValue, _T("X")) != NULL))         \
					    {                                                 \
							TCHAR *end;                                   \
                            __int64 result2 = 0;                          \
							errno = 0;                                    \
							result2 = (__int64)_tcstoll(tszValue,         \
														&end, 16);        \
							if (result2 == 0 && end == tszValue) {        \
								throw std::runtime_error(                 \
									"str was not a number");              \
							}                                             \
							else if (result2 == LLONG_MAX && errno) {     \
								throw std::runtime_error(                 \
									"the value of str does not "          \
									"fit in __int64");                    \
							}                                             \
							else if (*end) {                              \
								throw std::runtime_error(                 \
									"str began with a number but "        \
									"has junk left over at the end");     \
							}                                             \
							result |= (__int64)result2;                   \
						}                                                 \
						else {                                            \
						    result |= (__int64)_ttoi64(tszValue);         \
						}                                                 \
					}                                                     \
					else {                                                \
				        result |= (_underlying)_fromString(tszValue,      \
                                                        ignore_case, 0);  \
					}                                                     \
				}                                                         \
			}                                                             \
            lpctBegin = lpctEnd + 1;                                      \
		}                                                                 \
		                                                                  \
		if (result != (__int64)(_underlying)result) {                     \
			char szMsg[256];                                              \
			sprintf_s(szMsg, "Value was either too "                      \
					         "large or too small for an %s.",             \
					typeid(_underlying).name());                          \
			throw std::runtime_error(szMsg);                              \
		}                                                                 \
																		  \
        return (EnumName)(_underlying)result;                             \
    }                                                                     \
                                                                          \
    static EnumName Parse(const TCHAR *s)                                 \
    {                                                                     \
        return Parse(s, false);                                           \
    }                                                                     \
                                                                          \
    static bool TryParse(const TCHAR *s,                                  \
                             bool ignore_case,                            \
							 EnumName& reVal)                             \
    {                                                                     \
	    reVal = (EnumName)(_enum)data_ ## EnumName::_values[0];           \
	    try {                                                             \
            reVal = Parse(s, ignore_case);                                \
		}                                                                 \
		catch (...) {                                                     \
		    return false;                                                 \
	    }                                                                 \
		return true;                                                      \
    }                                                                     \
                                                                          \
    static bool TryParse(const TCHAR *s, EnumName& reVal)                 \
    {                                                                     \
        return TryParse(s, false, reVal);                                 \
    }                                                                     \
	                                                                      \
	static size_t GetMemberCount() { return data_ ## EnumName::_size; }   \
																		  \
    static EnumName GetMember(int index)					              \
	{                                                                     \
	    return                                                            \
            ((size_t)index >= data_ ## EnumName::_size) ?                 \
			(EnumName)(_enum)data_ ## EnumName::_values[0] :              \
			(EnumName)(_enum)data_ ## EnumName::_values[index];           \
	}                                                                     \
																		  \
    static int IndexOfMember(const EnumName& member) {				      \
	    for (size_t index = 0; index < data_ ## EnumName::_size;          \
             ++index)                                                     \
        {                                                                 \
		    if (data_ ## EnumName::_values[index] == member._value) {     \
			    return (int)index;                                        \
			}                                                             \
		}                                                                 \
		return -1;                                                        \
	}                                                                     \
																		  \
    EnumName() = delete;                                                  \
    EnumName(_enum value) : _value(value) { }                             \
	EnumName(_underlying value) : _value(value) { }                       \
    operator _enum() const { return (_enum)_value; }                      \
                                                                          \
																		  \
	EnumName& operator|=(const EnumName& v)                               \
	{                                                                     \
		_value |= v._value;                                               \
		return *this;                                                     \
	}                                                                     \
																		  \
	EnumName& operator&=(const EnumName& v)                               \
	{                                                                     \
		_value &= v._value;                                               \
		return *this;                                                     \
	}                                                                     \
																		  \
  private:																  \
    _underlying     _value;                                               \
	                                                                      \
    static EnumName _fromString(const TCHAR *s,                           \
	                                       bool ignore_case = false,      \
                                           size_t index = 0)              \
    {                                                                     \
        return                                                            \
            (index >= data_ ## EnumName::_size) ?                         \
                    throw std::runtime_error("invalid identifier") :      \
            (matches_untrimmed(                                           \
                data_ ## EnumName::_raw_names[index], s, ignore_case) ?   \
                    (EnumName)(_enum)data_ ## EnumName::_values[index] :  \
                     _fromString(s, ignore_case, index + 1));             \
    }                                                                     \
                                                                          \
                                                                          \
    static const TCHAR * const * _trimmed_names()                         \
    {                                                                     \
		static safe_string_array the_names(data_ ## EnumName::_size);     \
        static bool     initialized = false;                              \
                                                                          \
        if (!initialized) {                                               \
		    initialized = true;                                           \
            for (size_t index = 0; index < data_ ## EnumName::_size;      \
                 ++index) {                                               \
                                                                          \
                size_t  length =                                          \
                    _tcscspn(data_ ## EnumName::_raw_names[index],        \
                                 terminators);                            \
                                                                          \
                the_names[index] = new TCHAR[length + 1];                 \
                                                                          \
                _tcsncpy_s(the_names[index], length + 1,                  \
                             data_ ## EnumName::_raw_names[index],        \
                             length);                                     \
                the_names[index][length] = _T('\0');                      \
	        }                                                             \
	    }                                                                 \
                                                                          \
        return the_names._str_array;                                      \
    }                                                                     \
	                                                                      \
    static bool _is_contains_flags(void) {							      \
	    static bool result = false;                                       \
		static bool initialized = false;                                  \
		                                                                  \
        if (!initialized) {                                               \
            initialized = true;                                           \
                                                                          \
            _underlying val1 = 0, val2 = 0;                               \
            for (size_t index = 0; index < data_ ## EnumName::_size;      \
                 ++index) {                                               \
				 val1 += data_ ## EnumName::_values[index];               \
				 val2 |= data_ ## EnumName::_values[index];               \
            }                                                             \
			result = (val1 == val2);                                      \
        }                                                                 \
                                                                          \
        return result;                                                    \
	}                                                                     \
																		  \
	static const TCHAR * _to_value(__int64 value) {			              \
		static TCHAR tszValue[256];										  \
		_stprintf_s(tszValue, _T("%I64d"), value);						  \
		return tszValue;												  \
	}																	  \
																		  \
	static const TCHAR * _to_value(unsigned __int64 value) {			  \
		static TCHAR tszValue[256];										  \
		_stprintf_s(tszValue, _T("%I64u"), value);						  \
		return tszValue;												  \
	}																	  \
																		  \
	static const TCHAR * _to_value(int value) {			                  \
		return _to_value((__int64)value);								  \
	}																	  \
																		  \
	static const TCHAR * _to_value(short value) {			              \
		return _to_value((__int64)value);								  \
	}																	  \
																		  \
	static const TCHAR * _to_value(char value) {			              \
		return _to_value((__int64)value);								  \
	}																	  \
																		  \
	static const TCHAR * _to_value(unsigned int value) {			      \
		return _to_value((unsigned __int64)value);						  \
	}																	  \
																		  \
	static const TCHAR * _to_value(unsigned short value) {			      \
		return _to_value((unsigned __int64)value);						  \
	}																	  \
																		  \
	static const TCHAR * _to_value(unsigned char value) {			      \
		return _to_value((unsigned __int64)value);						  \
	}																	  \
};

#endif // __JLL_ENUM96_INL__
