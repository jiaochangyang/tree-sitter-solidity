#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 153
#define ALIAS_COUNT 0
#define TOKEN_COUNT 133
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_true = 1,
  anon_sym_false = 2,
  anon_sym_unicode = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_unicode_string_literal_token1 = 5,
  anon_sym_SQUOTE = 6,
  aux_sym_unicode_string_literal_token2 = 7,
  anon_sym_hex = 8,
  anon_sym__ = 9,
  sym_hex_digit = 10,
  anon_sym_address = 11,
  anon_sym_payable = 12,
  anon_sym_bool = 13,
  anon_sym_string = 14,
  anon_sym_bytes = 15,
  anon_sym_int = 16,
  anon_sym_int8 = 17,
  anon_sym_int16 = 18,
  anon_sym_int24 = 19,
  anon_sym_int32 = 20,
  anon_sym_int40 = 21,
  anon_sym_int48 = 22,
  anon_sym_int56 = 23,
  anon_sym_int64 = 24,
  anon_sym_int72 = 25,
  anon_sym_int80 = 26,
  anon_sym_int88 = 27,
  anon_sym_int96 = 28,
  anon_sym_int104 = 29,
  anon_sym_int112 = 30,
  anon_sym_int120 = 31,
  anon_sym_int128 = 32,
  anon_sym_int136 = 33,
  anon_sym_int144 = 34,
  anon_sym_int152 = 35,
  anon_sym_int160 = 36,
  anon_sym_int168 = 37,
  anon_sym_int176 = 38,
  anon_sym_int184 = 39,
  anon_sym_int192 = 40,
  anon_sym_int200 = 41,
  anon_sym_int208 = 42,
  anon_sym_int216 = 43,
  anon_sym_int224 = 44,
  anon_sym_int232 = 45,
  anon_sym_int240 = 46,
  anon_sym_int248 = 47,
  anon_sym_int256 = 48,
  anon_sym_uint = 49,
  anon_sym_uint8 = 50,
  anon_sym_uint16 = 51,
  anon_sym_uint24 = 52,
  anon_sym_uint32 = 53,
  anon_sym_uint40 = 54,
  anon_sym_uint48 = 55,
  anon_sym_uint56 = 56,
  anon_sym_uint64 = 57,
  anon_sym_uint72 = 58,
  anon_sym_uint80 = 59,
  anon_sym_uint88 = 60,
  anon_sym_uint96 = 61,
  anon_sym_uint104 = 62,
  anon_sym_uint112 = 63,
  anon_sym_uint120 = 64,
  anon_sym_uint128 = 65,
  anon_sym_uint136 = 66,
  anon_sym_uint144 = 67,
  anon_sym_uint152 = 68,
  anon_sym_uint160 = 69,
  anon_sym_uint168 = 70,
  anon_sym_uint176 = 71,
  anon_sym_uint184 = 72,
  anon_sym_uint192 = 73,
  anon_sym_uint200 = 74,
  anon_sym_uint208 = 75,
  anon_sym_uint216 = 76,
  anon_sym_uint224 = 77,
  anon_sym_uint232 = 78,
  anon_sym_uint240 = 79,
  anon_sym_uint248 = 80,
  anon_sym_uint256 = 81,
  anon_sym_bytes1 = 82,
  anon_sym_bytes2 = 83,
  anon_sym_bytes3 = 84,
  anon_sym_bytes4 = 85,
  anon_sym_bytes5 = 86,
  anon_sym_bytes6 = 87,
  anon_sym_bytes7 = 88,
  anon_sym_bytes8 = 89,
  anon_sym_bytes9 = 90,
  anon_sym_bytes10 = 91,
  anon_sym_bytes11 = 92,
  anon_sym_bytes12 = 93,
  anon_sym_bytes13 = 94,
  anon_sym_bytes14 = 95,
  anon_sym_bytes15 = 96,
  anon_sym_bytes16 = 97,
  anon_sym_bytes17 = 98,
  anon_sym_bytes18 = 99,
  anon_sym_bytes19 = 100,
  anon_sym_bytes20 = 101,
  anon_sym_bytes21 = 102,
  anon_sym_bytes22 = 103,
  anon_sym_bytes23 = 104,
  anon_sym_bytes24 = 105,
  anon_sym_bytes25 = 106,
  anon_sym_bytes26 = 107,
  anon_sym_bytes27 = 108,
  anon_sym_bytes28 = 109,
  anon_sym_bytes29 = 110,
  anon_sym_bytes30 = 111,
  anon_sym_bytes31 = 112,
  anon_sym_bytes32 = 113,
  anon_sym_fixed = 114,
  aux_sym_fixed_token1 = 115,
  anon_sym_ufixed = 116,
  aux_sym_ufixed_token1 = 117,
  aux_sym_decimal_number_token1 = 118,
  aux_sym_decimal_number_token2 = 119,
  sym_hex_number = 120,
  anon_sym_wei = 121,
  anon_sym_gwei = 122,
  anon_sym_ether = 123,
  anon_sym_seconds = 124,
  anon_sym_minutes = 125,
  anon_sym_hours = 126,
  anon_sym_days = 127,
  anon_sym_weeks = 128,
  anon_sym_years = 129,
  sym_escape_sequence = 130,
  sym_single_quoted_printable = 131,
  sym_double_quoted_printable = 132,
  sym_expression = 133,
  sym_literal = 134,
  sym_string_literal = 135,
  sym_number_literal = 136,
  sym_boolean_literal = 137,
  sym_hex_string_literal = 138,
  sym_unicode_string_literal = 139,
  sym_hex_string = 140,
  sym_decimal_number = 141,
  sym_number_unit = 142,
  sym_non_empty_string_literal = 143,
  sym_empty_string_literal = 144,
  aux_sym_string_literal_repeat1 = 145,
  aux_sym_hex_string_literal_repeat1 = 146,
  aux_sym_unicode_string_literal_repeat1 = 147,
  aux_sym_unicode_string_literal_repeat2 = 148,
  aux_sym_unicode_string_literal_repeat3 = 149,
  aux_sym_hex_string_repeat1 = 150,
  aux_sym_non_empty_string_literal_repeat1 = 151,
  aux_sym_non_empty_string_literal_repeat2 = 152,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_unicode] = "unicode",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_unicode_string_literal_token1] = "unicode_string_literal_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_unicode_string_literal_token2] = "unicode_string_literal_token2",
  [anon_sym_hex] = "hex",
  [anon_sym__] = "_",
  [sym_hex_digit] = "hex_digit",
  [anon_sym_address] = "address",
  [anon_sym_payable] = "payable",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_bytes] = "bytes",
  [anon_sym_int] = "int",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int24] = "int24",
  [anon_sym_int32] = "int32",
  [anon_sym_int40] = "int40",
  [anon_sym_int48] = "int48",
  [anon_sym_int56] = "int56",
  [anon_sym_int64] = "int64",
  [anon_sym_int72] = "int72",
  [anon_sym_int80] = "int80",
  [anon_sym_int88] = "int88",
  [anon_sym_int96] = "int96",
  [anon_sym_int104] = "int104",
  [anon_sym_int112] = "int112",
  [anon_sym_int120] = "int120",
  [anon_sym_int128] = "int128",
  [anon_sym_int136] = "int136",
  [anon_sym_int144] = "int144",
  [anon_sym_int152] = "int152",
  [anon_sym_int160] = "int160",
  [anon_sym_int168] = "int168",
  [anon_sym_int176] = "int176",
  [anon_sym_int184] = "int184",
  [anon_sym_int192] = "int192",
  [anon_sym_int200] = "int200",
  [anon_sym_int208] = "int208",
  [anon_sym_int216] = "int216",
  [anon_sym_int224] = "int224",
  [anon_sym_int232] = "int232",
  [anon_sym_int240] = "int240",
  [anon_sym_int248] = "int248",
  [anon_sym_int256] = "int256",
  [anon_sym_uint] = "uint",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint24] = "uint24",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint40] = "uint40",
  [anon_sym_uint48] = "uint48",
  [anon_sym_uint56] = "uint56",
  [anon_sym_uint64] = "uint64",
  [anon_sym_uint72] = "uint72",
  [anon_sym_uint80] = "uint80",
  [anon_sym_uint88] = "uint88",
  [anon_sym_uint96] = "uint96",
  [anon_sym_uint104] = "uint104",
  [anon_sym_uint112] = "uint112",
  [anon_sym_uint120] = "uint120",
  [anon_sym_uint128] = "uint128",
  [anon_sym_uint136] = "uint136",
  [anon_sym_uint144] = "uint144",
  [anon_sym_uint152] = "uint152",
  [anon_sym_uint160] = "uint160",
  [anon_sym_uint168] = "uint168",
  [anon_sym_uint176] = "uint176",
  [anon_sym_uint184] = "uint184",
  [anon_sym_uint192] = "uint192",
  [anon_sym_uint200] = "uint200",
  [anon_sym_uint208] = "uint208",
  [anon_sym_uint216] = "uint216",
  [anon_sym_uint224] = "uint224",
  [anon_sym_uint232] = "uint232",
  [anon_sym_uint240] = "uint240",
  [anon_sym_uint248] = "uint248",
  [anon_sym_uint256] = "uint256",
  [anon_sym_bytes1] = "bytes1",
  [anon_sym_bytes2] = "bytes2",
  [anon_sym_bytes3] = "bytes3",
  [anon_sym_bytes4] = "bytes4",
  [anon_sym_bytes5] = "bytes5",
  [anon_sym_bytes6] = "bytes6",
  [anon_sym_bytes7] = "bytes7",
  [anon_sym_bytes8] = "bytes8",
  [anon_sym_bytes9] = "bytes9",
  [anon_sym_bytes10] = "bytes10",
  [anon_sym_bytes11] = "bytes11",
  [anon_sym_bytes12] = "bytes12",
  [anon_sym_bytes13] = "bytes13",
  [anon_sym_bytes14] = "bytes14",
  [anon_sym_bytes15] = "bytes15",
  [anon_sym_bytes16] = "bytes16",
  [anon_sym_bytes17] = "bytes17",
  [anon_sym_bytes18] = "bytes18",
  [anon_sym_bytes19] = "bytes19",
  [anon_sym_bytes20] = "bytes20",
  [anon_sym_bytes21] = "bytes21",
  [anon_sym_bytes22] = "bytes22",
  [anon_sym_bytes23] = "bytes23",
  [anon_sym_bytes24] = "bytes24",
  [anon_sym_bytes25] = "bytes25",
  [anon_sym_bytes26] = "bytes26",
  [anon_sym_bytes27] = "bytes27",
  [anon_sym_bytes28] = "bytes28",
  [anon_sym_bytes29] = "bytes29",
  [anon_sym_bytes30] = "bytes30",
  [anon_sym_bytes31] = "bytes31",
  [anon_sym_bytes32] = "bytes32",
  [anon_sym_fixed] = "fixed",
  [aux_sym_fixed_token1] = "fixed_token1",
  [anon_sym_ufixed] = "ufixed",
  [aux_sym_ufixed_token1] = "ufixed_token1",
  [aux_sym_decimal_number_token1] = "decimal_number_token1",
  [aux_sym_decimal_number_token2] = "decimal_number_token2",
  [sym_hex_number] = "hex_number",
  [anon_sym_wei] = "wei",
  [anon_sym_gwei] = "gwei",
  [anon_sym_ether] = "ether",
  [anon_sym_seconds] = "seconds",
  [anon_sym_minutes] = "minutes",
  [anon_sym_hours] = "hours",
  [anon_sym_days] = "days",
  [anon_sym_weeks] = "weeks",
  [anon_sym_years] = "years",
  [sym_escape_sequence] = "escape_sequence",
  [sym_single_quoted_printable] = "single_quoted_printable",
  [sym_double_quoted_printable] = "double_quoted_printable",
  [sym_expression] = "expression",
  [sym_literal] = "literal",
  [sym_string_literal] = "string_literal",
  [sym_number_literal] = "number_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_hex_string_literal] = "hex_string_literal",
  [sym_unicode_string_literal] = "unicode_string_literal",
  [sym_hex_string] = "hex_string",
  [sym_decimal_number] = "decimal_number",
  [sym_number_unit] = "number_unit",
  [sym_non_empty_string_literal] = "non_empty_string_literal",
  [sym_empty_string_literal] = "empty_string_literal",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_hex_string_literal_repeat1] = "hex_string_literal_repeat1",
  [aux_sym_unicode_string_literal_repeat1] = "unicode_string_literal_repeat1",
  [aux_sym_unicode_string_literal_repeat2] = "unicode_string_literal_repeat2",
  [aux_sym_unicode_string_literal_repeat3] = "unicode_string_literal_repeat3",
  [aux_sym_hex_string_repeat1] = "hex_string_repeat1",
  [aux_sym_non_empty_string_literal_repeat1] = "non_empty_string_literal_repeat1",
  [aux_sym_non_empty_string_literal_repeat2] = "non_empty_string_literal_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_unicode] = anon_sym_unicode,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_unicode_string_literal_token1] = aux_sym_unicode_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_unicode_string_literal_token2] = aux_sym_unicode_string_literal_token2,
  [anon_sym_hex] = anon_sym_hex,
  [anon_sym__] = anon_sym__,
  [sym_hex_digit] = sym_hex_digit,
  [anon_sym_address] = anon_sym_address,
  [anon_sym_payable] = anon_sym_payable,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int24] = anon_sym_int24,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int40] = anon_sym_int40,
  [anon_sym_int48] = anon_sym_int48,
  [anon_sym_int56] = anon_sym_int56,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_int72] = anon_sym_int72,
  [anon_sym_int80] = anon_sym_int80,
  [anon_sym_int88] = anon_sym_int88,
  [anon_sym_int96] = anon_sym_int96,
  [anon_sym_int104] = anon_sym_int104,
  [anon_sym_int112] = anon_sym_int112,
  [anon_sym_int120] = anon_sym_int120,
  [anon_sym_int128] = anon_sym_int128,
  [anon_sym_int136] = anon_sym_int136,
  [anon_sym_int144] = anon_sym_int144,
  [anon_sym_int152] = anon_sym_int152,
  [anon_sym_int160] = anon_sym_int160,
  [anon_sym_int168] = anon_sym_int168,
  [anon_sym_int176] = anon_sym_int176,
  [anon_sym_int184] = anon_sym_int184,
  [anon_sym_int192] = anon_sym_int192,
  [anon_sym_int200] = anon_sym_int200,
  [anon_sym_int208] = anon_sym_int208,
  [anon_sym_int216] = anon_sym_int216,
  [anon_sym_int224] = anon_sym_int224,
  [anon_sym_int232] = anon_sym_int232,
  [anon_sym_int240] = anon_sym_int240,
  [anon_sym_int248] = anon_sym_int248,
  [anon_sym_int256] = anon_sym_int256,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint24] = anon_sym_uint24,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint40] = anon_sym_uint40,
  [anon_sym_uint48] = anon_sym_uint48,
  [anon_sym_uint56] = anon_sym_uint56,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_uint72] = anon_sym_uint72,
  [anon_sym_uint80] = anon_sym_uint80,
  [anon_sym_uint88] = anon_sym_uint88,
  [anon_sym_uint96] = anon_sym_uint96,
  [anon_sym_uint104] = anon_sym_uint104,
  [anon_sym_uint112] = anon_sym_uint112,
  [anon_sym_uint120] = anon_sym_uint120,
  [anon_sym_uint128] = anon_sym_uint128,
  [anon_sym_uint136] = anon_sym_uint136,
  [anon_sym_uint144] = anon_sym_uint144,
  [anon_sym_uint152] = anon_sym_uint152,
  [anon_sym_uint160] = anon_sym_uint160,
  [anon_sym_uint168] = anon_sym_uint168,
  [anon_sym_uint176] = anon_sym_uint176,
  [anon_sym_uint184] = anon_sym_uint184,
  [anon_sym_uint192] = anon_sym_uint192,
  [anon_sym_uint200] = anon_sym_uint200,
  [anon_sym_uint208] = anon_sym_uint208,
  [anon_sym_uint216] = anon_sym_uint216,
  [anon_sym_uint224] = anon_sym_uint224,
  [anon_sym_uint232] = anon_sym_uint232,
  [anon_sym_uint240] = anon_sym_uint240,
  [anon_sym_uint248] = anon_sym_uint248,
  [anon_sym_uint256] = anon_sym_uint256,
  [anon_sym_bytes1] = anon_sym_bytes1,
  [anon_sym_bytes2] = anon_sym_bytes2,
  [anon_sym_bytes3] = anon_sym_bytes3,
  [anon_sym_bytes4] = anon_sym_bytes4,
  [anon_sym_bytes5] = anon_sym_bytes5,
  [anon_sym_bytes6] = anon_sym_bytes6,
  [anon_sym_bytes7] = anon_sym_bytes7,
  [anon_sym_bytes8] = anon_sym_bytes8,
  [anon_sym_bytes9] = anon_sym_bytes9,
  [anon_sym_bytes10] = anon_sym_bytes10,
  [anon_sym_bytes11] = anon_sym_bytes11,
  [anon_sym_bytes12] = anon_sym_bytes12,
  [anon_sym_bytes13] = anon_sym_bytes13,
  [anon_sym_bytes14] = anon_sym_bytes14,
  [anon_sym_bytes15] = anon_sym_bytes15,
  [anon_sym_bytes16] = anon_sym_bytes16,
  [anon_sym_bytes17] = anon_sym_bytes17,
  [anon_sym_bytes18] = anon_sym_bytes18,
  [anon_sym_bytes19] = anon_sym_bytes19,
  [anon_sym_bytes20] = anon_sym_bytes20,
  [anon_sym_bytes21] = anon_sym_bytes21,
  [anon_sym_bytes22] = anon_sym_bytes22,
  [anon_sym_bytes23] = anon_sym_bytes23,
  [anon_sym_bytes24] = anon_sym_bytes24,
  [anon_sym_bytes25] = anon_sym_bytes25,
  [anon_sym_bytes26] = anon_sym_bytes26,
  [anon_sym_bytes27] = anon_sym_bytes27,
  [anon_sym_bytes28] = anon_sym_bytes28,
  [anon_sym_bytes29] = anon_sym_bytes29,
  [anon_sym_bytes30] = anon_sym_bytes30,
  [anon_sym_bytes31] = anon_sym_bytes31,
  [anon_sym_bytes32] = anon_sym_bytes32,
  [anon_sym_fixed] = anon_sym_fixed,
  [aux_sym_fixed_token1] = aux_sym_fixed_token1,
  [anon_sym_ufixed] = anon_sym_ufixed,
  [aux_sym_ufixed_token1] = aux_sym_ufixed_token1,
  [aux_sym_decimal_number_token1] = aux_sym_decimal_number_token1,
  [aux_sym_decimal_number_token2] = aux_sym_decimal_number_token2,
  [sym_hex_number] = sym_hex_number,
  [anon_sym_wei] = anon_sym_wei,
  [anon_sym_gwei] = anon_sym_gwei,
  [anon_sym_ether] = anon_sym_ether,
  [anon_sym_seconds] = anon_sym_seconds,
  [anon_sym_minutes] = anon_sym_minutes,
  [anon_sym_hours] = anon_sym_hours,
  [anon_sym_days] = anon_sym_days,
  [anon_sym_weeks] = anon_sym_weeks,
  [anon_sym_years] = anon_sym_years,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_single_quoted_printable] = sym_single_quoted_printable,
  [sym_double_quoted_printable] = sym_double_quoted_printable,
  [sym_expression] = sym_expression,
  [sym_literal] = sym_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_hex_string_literal] = sym_hex_string_literal,
  [sym_unicode_string_literal] = sym_unicode_string_literal,
  [sym_hex_string] = sym_hex_string,
  [sym_decimal_number] = sym_decimal_number,
  [sym_number_unit] = sym_number_unit,
  [sym_non_empty_string_literal] = sym_non_empty_string_literal,
  [sym_empty_string_literal] = sym_empty_string_literal,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_hex_string_literal_repeat1] = aux_sym_hex_string_literal_repeat1,
  [aux_sym_unicode_string_literal_repeat1] = aux_sym_unicode_string_literal_repeat1,
  [aux_sym_unicode_string_literal_repeat2] = aux_sym_unicode_string_literal_repeat2,
  [aux_sym_unicode_string_literal_repeat3] = aux_sym_unicode_string_literal_repeat3,
  [aux_sym_hex_string_repeat1] = aux_sym_hex_string_repeat1,
  [aux_sym_non_empty_string_literal_repeat1] = aux_sym_non_empty_string_literal_repeat1,
  [aux_sym_non_empty_string_literal_repeat2] = aux_sym_non_empty_string_literal_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unicode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unicode_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unicode_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_hex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_hex_digit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int40] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int48] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int56] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int72] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int80] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int88] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int96] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int104] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int112] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int120] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int136] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int144] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int152] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int160] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int168] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int176] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int184] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int192] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int200] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int208] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int216] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int224] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int232] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int240] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int248] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint40] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint48] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint56] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint72] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint80] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint88] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint96] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint104] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint112] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint120] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint136] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint144] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint152] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint160] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint168] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint176] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint184] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint192] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint200] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint208] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint216] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint224] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint232] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint240] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint248] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes23] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes25] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes26] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes27] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes28] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes29] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes30] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes31] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fixed_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ufixed] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ufixed_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_number_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_hex_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_wei] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gwei] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ether] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minutes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hours] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_days] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weeks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_years] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_printable] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_printable] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_string] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_number_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_non_empty_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unicode_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unicode_string_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unicode_string_literal_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_non_empty_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_non_empty_string_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead == '_') ADVANCE(169);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == 'w') ADVANCE(71);
      if (lookahead == 'y') ADVANCE(78);
      if (lookahead == '~') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(299);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('!' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(299);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(301);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('!' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(301);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead == '_') ADVANCE(169);
      if (lookahead == '~') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead == '_') ADVANCE(169);
      if (lookahead == '~') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(167);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '\\') ADVANCE(165);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(286);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(284);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(184);
      if (lookahead == '8') ADVANCE(185);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(194);
      if (lookahead == '8') ADVANCE(195);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(204);
      if (lookahead == '8') ADVANCE(205);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(217);
      if (lookahead == '8') ADVANCE(218);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == '8') ADVANCE(228);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(237);
      if (lookahead == '8') ADVANCE(238);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '2') ADVANCE(11);
      if (lookahead == '3') ADVANCE(44);
      if (lookahead == '4') ADVANCE(34);
      if (lookahead == '5') ADVANCE(23);
      if (lookahead == '6') ADVANCE(181);
      if (lookahead == '7') ADVANCE(45);
      if (lookahead == '8') ADVANCE(35);
      if (lookahead == '9') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '2') ADVANCE(36);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '4') ADVANCE(182);
      if (lookahead == '5') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '2') ADVANCE(41);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '4') ADVANCE(215);
      if (lookahead == '5') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == '2') ADVANCE(14);
      if (lookahead == '3') ADVANCE(50);
      if (lookahead == '4') ADVANCE(39);
      if (lookahead == '5') ADVANCE(29);
      if (lookahead == '6') ADVANCE(214);
      if (lookahead == '7') ADVANCE(51);
      if (lookahead == '8') ADVANCE(40);
      if (lookahead == '9') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(183);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(188);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(193);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(198);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(208);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(216);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(221);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(226);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(231);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(236);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(241);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(187);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(192);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(197);
      END_STATE();
    case 35:
      if (lookahead == '4') ADVANCE(202);
      END_STATE();
    case 36:
      if (lookahead == '4') ADVANCE(207);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(220);
      END_STATE();
    case 38:
      if (lookahead == '4') ADVANCE(225);
      END_STATE();
    case 39:
      if (lookahead == '4') ADVANCE(230);
      END_STATE();
    case 40:
      if (lookahead == '4') ADVANCE(235);
      END_STATE();
    case 41:
      if (lookahead == '4') ADVANCE(240);
      END_STATE();
    case 42:
      if (lookahead == '6') ADVANCE(186);
      END_STATE();
    case 43:
      if (lookahead == '6') ADVANCE(191);
      END_STATE();
    case 44:
      if (lookahead == '6') ADVANCE(196);
      END_STATE();
    case 45:
      if (lookahead == '6') ADVANCE(201);
      END_STATE();
    case 46:
      if (lookahead == '6') ADVANCE(206);
      END_STATE();
    case 47:
      if (lookahead == '6') ADVANCE(211);
      END_STATE();
    case 48:
      if (lookahead == '6') ADVANCE(219);
      END_STATE();
    case 49:
      if (lookahead == '6') ADVANCE(224);
      END_STATE();
    case 50:
      if (lookahead == '6') ADVANCE(229);
      END_STATE();
    case 51:
      if (lookahead == '6') ADVANCE(234);
      END_STATE();
    case 52:
      if (lookahead == '6') ADVANCE(239);
      END_STATE();
    case 53:
      if (lookahead == '6') ADVANCE(244);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 94:
      if (lookahead == 'k') ADVANCE(117);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'y') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 134:
      if (lookahead == 'w') ADVANCE(82);
      END_STATE();
    case 135:
      if (lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 136:
      if (lookahead == 'x') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == 'x') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 139:
      if (lookahead == 'x') ADVANCE(81);
      END_STATE();
    case 140:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 141:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 142:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 143:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(165);
      END_STATE();
    case 144:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(167);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(285);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(286);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(283);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(284);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == '_') ADVANCE(169);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == 'w') ADVANCE(71);
      if (lookahead == 'y') ADVANCE(78);
      if (lookahead == '~') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 158:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(130);
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == 'w') ADVANCE(71);
      if (lookahead == 'y') ADVANCE(78);
      if (lookahead == '~') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '0') ADVANCE(282);
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == 'w') ADVANCE(71);
      if (lookahead == 'y') ADVANCE(78);
      if (lookahead == '~') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_unicode);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_unicode_string_literal_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_unicode_string_literal_token2);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_hex);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_hex_digit);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_hex_digit);
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_hex_digit);
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_hex_digit);
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_payable);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '1') ADVANCE(245);
      if (lookahead == '2') ADVANCE(246);
      if (lookahead == '3') ADVANCE(247);
      if (lookahead == '4') ADVANCE(248);
      if (lookahead == '5') ADVANCE(249);
      if (lookahead == '6') ADVANCE(250);
      if (lookahead == '7') ADVANCE(251);
      if (lookahead == '8') ADVANCE(252);
      if (lookahead == '9') ADVANCE(253);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '4') ADVANCE(10);
      if (lookahead == '5') ADVANCE(42);
      if (lookahead == '6') ADVANCE(32);
      if (lookahead == '7') ADVANCE(21);
      if (lookahead == '8') ADVANCE(180);
      if (lookahead == '9') ADVANCE(43);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '0') ADVANCE(189);
      if (lookahead == '8') ADVANCE(190);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '8') ADVANCE(200);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_int24);
      if (lookahead == '0') ADVANCE(209);
      if (lookahead == '8') ADVANCE(210);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_int40);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_int48);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_int56);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_int72);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_int80);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_int88);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_int96);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_int104);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_int112);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_int120);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_int128);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_int136);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_int144);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_int152);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_int160);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_int168);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_int176);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_int184);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_int192);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_int200);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_int208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_int216);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_int224);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_int232);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_int240);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_int248);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_int256);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '2') ADVANCE(18);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '4') ADVANCE(13);
      if (lookahead == '5') ADVANCE(48);
      if (lookahead == '6') ADVANCE(37);
      if (lookahead == '7') ADVANCE(27);
      if (lookahead == '8') ADVANCE(213);
      if (lookahead == '9') ADVANCE(49);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '0') ADVANCE(222);
      if (lookahead == '8') ADVANCE(223);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '0') ADVANCE(232);
      if (lookahead == '8') ADVANCE(233);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_uint24);
      if (lookahead == '0') ADVANCE(242);
      if (lookahead == '8') ADVANCE(243);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_uint40);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_uint48);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_uint56);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_uint72);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_uint80);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_uint88);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_uint96);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_uint104);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_uint112);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_uint120);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_uint128);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_uint136);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_uint144);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_uint152);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_uint160);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_uint168);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_uint176);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_uint184);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_uint192);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_uint200);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_uint208);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_uint216);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_uint224);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_uint232);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_uint240);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_uint248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_uint256);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_bytes1);
      if (lookahead == '0') ADVANCE(254);
      if (lookahead == '1') ADVANCE(255);
      if (lookahead == '2') ADVANCE(256);
      if (lookahead == '3') ADVANCE(257);
      if (lookahead == '4') ADVANCE(258);
      if (lookahead == '5') ADVANCE(259);
      if (lookahead == '6') ADVANCE(260);
      if (lookahead == '7') ADVANCE(261);
      if (lookahead == '8') ADVANCE(262);
      if (lookahead == '9') ADVANCE(263);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_bytes2);
      if (lookahead == '0') ADVANCE(264);
      if (lookahead == '1') ADVANCE(265);
      if (lookahead == '2') ADVANCE(266);
      if (lookahead == '3') ADVANCE(267);
      if (lookahead == '4') ADVANCE(268);
      if (lookahead == '5') ADVANCE(269);
      if (lookahead == '6') ADVANCE(270);
      if (lookahead == '7') ADVANCE(271);
      if (lookahead == '8') ADVANCE(272);
      if (lookahead == '9') ADVANCE(273);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_bytes3);
      if (lookahead == '0') ADVANCE(274);
      if (lookahead == '1') ADVANCE(275);
      if (lookahead == '2') ADVANCE(276);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_bytes4);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_bytes5);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_bytes6);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_bytes7);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_bytes8);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_bytes9);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_bytes10);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_bytes11);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_bytes12);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_bytes13);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_bytes14);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_bytes15);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_bytes16);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_bytes17);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_bytes18);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_bytes19);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_bytes20);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_bytes21);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_bytes22);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_bytes23);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_bytes24);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_bytes25);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_bytes26);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_bytes27);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_bytes28);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_bytes29);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_bytes30);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_bytes31);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_bytes32);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_fixed);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_fixed_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_ufixed);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_ufixed_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(283);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_decimal_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(285);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_decimal_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_hex_number);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_wei);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_gwei);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_ether);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_single_quoted_printable);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_single_quoted_printable);
      if (lookahead == ' ') ADVANCE(300);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_double_quoted_printable);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_double_quoted_printable);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(301);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 158},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 158},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 158},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 158},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_unicode] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_unicode_string_literal_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_unicode_string_literal_token2] = ACTIONS(1),
    [anon_sym_hex] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_hex_digit] = ACTIONS(1),
    [anon_sym_address] = ACTIONS(1),
    [anon_sym_payable] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int24] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int40] = ACTIONS(1),
    [anon_sym_int48] = ACTIONS(1),
    [anon_sym_int56] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_int72] = ACTIONS(1),
    [anon_sym_int80] = ACTIONS(1),
    [anon_sym_int88] = ACTIONS(1),
    [anon_sym_int96] = ACTIONS(1),
    [anon_sym_int104] = ACTIONS(1),
    [anon_sym_int112] = ACTIONS(1),
    [anon_sym_int120] = ACTIONS(1),
    [anon_sym_int128] = ACTIONS(1),
    [anon_sym_int136] = ACTIONS(1),
    [anon_sym_int144] = ACTIONS(1),
    [anon_sym_int152] = ACTIONS(1),
    [anon_sym_int160] = ACTIONS(1),
    [anon_sym_int168] = ACTIONS(1),
    [anon_sym_int176] = ACTIONS(1),
    [anon_sym_int184] = ACTIONS(1),
    [anon_sym_int192] = ACTIONS(1),
    [anon_sym_int200] = ACTIONS(1),
    [anon_sym_int208] = ACTIONS(1),
    [anon_sym_int216] = ACTIONS(1),
    [anon_sym_int224] = ACTIONS(1),
    [anon_sym_int232] = ACTIONS(1),
    [anon_sym_int240] = ACTIONS(1),
    [anon_sym_int248] = ACTIONS(1),
    [anon_sym_int256] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint24] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint40] = ACTIONS(1),
    [anon_sym_uint48] = ACTIONS(1),
    [anon_sym_uint56] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_uint72] = ACTIONS(1),
    [anon_sym_uint80] = ACTIONS(1),
    [anon_sym_uint88] = ACTIONS(1),
    [anon_sym_uint96] = ACTIONS(1),
    [anon_sym_uint104] = ACTIONS(1),
    [anon_sym_uint112] = ACTIONS(1),
    [anon_sym_uint120] = ACTIONS(1),
    [anon_sym_uint128] = ACTIONS(1),
    [anon_sym_uint136] = ACTIONS(1),
    [anon_sym_uint144] = ACTIONS(1),
    [anon_sym_uint152] = ACTIONS(1),
    [anon_sym_uint160] = ACTIONS(1),
    [anon_sym_uint168] = ACTIONS(1),
    [anon_sym_uint176] = ACTIONS(1),
    [anon_sym_uint184] = ACTIONS(1),
    [anon_sym_uint192] = ACTIONS(1),
    [anon_sym_uint200] = ACTIONS(1),
    [anon_sym_uint208] = ACTIONS(1),
    [anon_sym_uint216] = ACTIONS(1),
    [anon_sym_uint224] = ACTIONS(1),
    [anon_sym_uint232] = ACTIONS(1),
    [anon_sym_uint240] = ACTIONS(1),
    [anon_sym_uint248] = ACTIONS(1),
    [anon_sym_uint256] = ACTIONS(1),
    [anon_sym_bytes1] = ACTIONS(1),
    [anon_sym_bytes2] = ACTIONS(1),
    [anon_sym_bytes3] = ACTIONS(1),
    [anon_sym_bytes4] = ACTIONS(1),
    [anon_sym_bytes5] = ACTIONS(1),
    [anon_sym_bytes6] = ACTIONS(1),
    [anon_sym_bytes7] = ACTIONS(1),
    [anon_sym_bytes8] = ACTIONS(1),
    [anon_sym_bytes9] = ACTIONS(1),
    [anon_sym_bytes10] = ACTIONS(1),
    [anon_sym_bytes11] = ACTIONS(1),
    [anon_sym_bytes12] = ACTIONS(1),
    [anon_sym_bytes13] = ACTIONS(1),
    [anon_sym_bytes14] = ACTIONS(1),
    [anon_sym_bytes15] = ACTIONS(1),
    [anon_sym_bytes16] = ACTIONS(1),
    [anon_sym_bytes17] = ACTIONS(1),
    [anon_sym_bytes18] = ACTIONS(1),
    [anon_sym_bytes19] = ACTIONS(1),
    [anon_sym_bytes20] = ACTIONS(1),
    [anon_sym_bytes21] = ACTIONS(1),
    [anon_sym_bytes22] = ACTIONS(1),
    [anon_sym_bytes23] = ACTIONS(1),
    [anon_sym_bytes24] = ACTIONS(1),
    [anon_sym_bytes25] = ACTIONS(1),
    [anon_sym_bytes26] = ACTIONS(1),
    [anon_sym_bytes27] = ACTIONS(1),
    [anon_sym_bytes28] = ACTIONS(1),
    [anon_sym_bytes29] = ACTIONS(1),
    [anon_sym_bytes30] = ACTIONS(1),
    [anon_sym_bytes31] = ACTIONS(1),
    [anon_sym_bytes32] = ACTIONS(1),
    [anon_sym_fixed] = ACTIONS(1),
    [aux_sym_fixed_token1] = ACTIONS(1),
    [anon_sym_ufixed] = ACTIONS(1),
    [aux_sym_ufixed_token1] = ACTIONS(1),
    [aux_sym_decimal_number_token2] = ACTIONS(1),
    [sym_hex_number] = ACTIONS(1),
    [anon_sym_wei] = ACTIONS(1),
    [anon_sym_gwei] = ACTIONS(1),
    [anon_sym_ether] = ACTIONS(1),
    [anon_sym_seconds] = ACTIONS(1),
    [anon_sym_minutes] = ACTIONS(1),
    [anon_sym_hours] = ACTIONS(1),
    [anon_sym_days] = ACTIONS(1),
    [anon_sym_weeks] = ACTIONS(1),
    [anon_sym_years] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(42),
    [sym_literal] = STATE(41),
    [sym_string_literal] = STATE(40),
    [sym_number_literal] = STATE(40),
    [sym_boolean_literal] = STATE(40),
    [sym_hex_string_literal] = STATE(40),
    [sym_unicode_string_literal] = STATE(40),
    [sym_hex_string] = STATE(13),
    [sym_decimal_number] = STATE(2),
    [sym_non_empty_string_literal] = STATE(4),
    [sym_empty_string_literal] = STATE(4),
    [aux_sym_string_literal_repeat1] = STATE(4),
    [aux_sym_hex_string_literal_repeat1] = STATE(13),
    [aux_sym_unicode_string_literal_repeat3] = STATE(27),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [anon_sym_unicode] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_hex] = ACTIONS(11),
    [aux_sym_decimal_number_token1] = ACTIONS(13),
    [aux_sym_decimal_number_token2] = ACTIONS(15),
    [sym_hex_number] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_number_unit,
    ACTIONS(21), 9,
      anon_sym_wei,
      anon_sym_gwei,
      anon_sym_ether,
      anon_sym_seconds,
      anon_sym_minutes,
      anon_sym_hours,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
  [18] = 1,
    ACTIONS(23), 10,
      ts_builtin_sym_end,
      anon_sym_wei,
      anon_sym_gwei,
      anon_sym_ether,
      anon_sym_seconds,
      anon_sym_minutes,
      anon_sym_hours,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
  [31] = 4,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(5), 3,
      sym_non_empty_string_literal,
      sym_empty_string_literal,
      aux_sym_string_literal_repeat1,
  [46] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    STATE(5), 3,
      sym_non_empty_string_literal,
      sym_empty_string_literal,
      aux_sym_string_literal_repeat1,
  [61] = 3,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      aux_sym_non_empty_string_literal_repeat2,
    ACTIONS(37), 2,
      sym_escape_sequence,
      sym_single_quoted_printable,
  [72] = 3,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym_unicode_string_literal_repeat1,
    ACTIONS(42), 2,
      aux_sym_unicode_string_literal_token1,
      sym_escape_sequence,
  [83] = 3,
    ACTIONS(47), 1,
      sym_hex_digit,
    STATE(8), 1,
      aux_sym_hex_string_repeat1,
    ACTIONS(45), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [94] = 2,
    ACTIONS(52), 1,
      anon_sym__,
    ACTIONS(50), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_hex_digit,
  [103] = 3,
    ACTIONS(54), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      aux_sym_non_empty_string_literal_repeat2,
    ACTIONS(56), 2,
      sym_escape_sequence,
      sym_single_quoted_printable,
  [114] = 3,
    ACTIONS(58), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_non_empty_string_literal_repeat1,
    ACTIONS(60), 2,
      sym_escape_sequence,
      sym_double_quoted_printable,
  [125] = 3,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_non_empty_string_literal_repeat1,
    ACTIONS(63), 2,
      sym_escape_sequence,
      sym_double_quoted_printable,
  [136] = 3,
    ACTIONS(11), 1,
      anon_sym_hex,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym_hex_string,
      aux_sym_hex_string_literal_repeat1,
  [147] = 3,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      aux_sym_unicode_string_literal_repeat2,
    ACTIONS(69), 2,
      aux_sym_unicode_string_literal_token2,
      sym_escape_sequence,
  [158] = 3,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_unicode_string_literal_repeat1,
    ACTIONS(74), 2,
      aux_sym_unicode_string_literal_token1,
      sym_escape_sequence,
  [169] = 3,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      aux_sym_unicode_string_literal_repeat2,
    ACTIONS(76), 2,
      aux_sym_unicode_string_literal_token2,
      sym_escape_sequence,
  [180] = 3,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      aux_sym_unicode_string_literal_repeat2,
    ACTIONS(80), 2,
      aux_sym_unicode_string_literal_token2,
      sym_escape_sequence,
  [191] = 3,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_non_empty_string_literal_repeat1,
    ACTIONS(84), 2,
      sym_escape_sequence,
      sym_double_quoted_printable,
  [202] = 3,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      aux_sym_non_empty_string_literal_repeat2,
    ACTIONS(86), 2,
      sym_escape_sequence,
      sym_single_quoted_printable,
  [213] = 3,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym_unicode_string_literal_repeat1,
    ACTIONS(88), 2,
      aux_sym_unicode_string_literal_token1,
      sym_escape_sequence,
  [224] = 3,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      anon_sym_hex,
    STATE(21), 2,
      sym_hex_string,
      aux_sym_hex_string_literal_repeat1,
  [235] = 1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [241] = 3,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_unicode,
    STATE(23), 1,
      aux_sym_unicode_string_literal_repeat3,
  [251] = 3,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      sym_hex_digit,
    STATE(29), 1,
      aux_sym_hex_string_repeat1,
  [261] = 3,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      sym_hex_digit,
    STATE(28), 1,
      aux_sym_hex_string_repeat1,
  [271] = 1,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [277] = 3,
    ACTIONS(5), 1,
      anon_sym_unicode,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_unicode_string_literal_repeat3,
  [287] = 3,
    ACTIONS(104), 1,
      sym_hex_digit,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      aux_sym_hex_string_repeat1,
  [297] = 3,
    ACTIONS(104), 1,
      sym_hex_digit,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      aux_sym_hex_string_repeat1,
  [307] = 1,
    ACTIONS(45), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_hex_digit,
  [313] = 1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_unicode,
  [318] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_hex,
  [323] = 1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_unicode,
  [328] = 2,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
  [335] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_hex,
  [340] = 2,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
  [347] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [351] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [355] = 1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [359] = 1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
  [363] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [367] = 1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 31,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 61,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 103,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 125,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 147,
  [SMALL_STATE(15)] = 158,
  [SMALL_STATE(16)] = 169,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 202,
  [SMALL_STATE(20)] = 213,
  [SMALL_STATE(21)] = 224,
  [SMALL_STATE(22)] = 235,
  [SMALL_STATE(23)] = 241,
  [SMALL_STATE(24)] = 251,
  [SMALL_STATE(25)] = 261,
  [SMALL_STATE(26)] = 271,
  [SMALL_STATE(27)] = 277,
  [SMALL_STATE(28)] = 287,
  [SMALL_STATE(29)] = 297,
  [SMALL_STATE(30)] = 307,
  [SMALL_STATE(31)] = 313,
  [SMALL_STATE(32)] = 318,
  [SMALL_STATE(33)] = 323,
  [SMALL_STATE(34)] = 328,
  [SMALL_STATE(35)] = 335,
  [SMALL_STATE(36)] = 340,
  [SMALL_STATE(37)] = 347,
  [SMALL_STATE(38)] = 351,
  [SMALL_STATE(39)] = 355,
  [SMALL_STATE(40)] = 359,
  [SMALL_STATE(41)] = 363,
  [SMALL_STATE(42)] = 367,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(12),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(10),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_non_empty_string_literal_repeat2, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_empty_string_literal_repeat2, 2), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unicode_string_literal_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unicode_string_literal_repeat1, 2), SHIFT_REPEAT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2), SHIFT_REPEAT(9),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_non_empty_string_literal_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_non_empty_string_literal_repeat1, 2), SHIFT_REPEAT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_string_literal, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unicode_string_literal_repeat2, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unicode_string_literal_repeat2, 2), SHIFT_REPEAT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_string_literal_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_literal_repeat1, 2), SHIFT_REPEAT(34),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_string_literal, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unicode_string_literal_repeat3, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unicode_string_literal_repeat3, 2), SHIFT_REPEAT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_string_literal, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_string_literal, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unicode_string_literal_repeat3, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_string, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unicode_string_literal_repeat3, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_string, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_unit, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_solidity(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
