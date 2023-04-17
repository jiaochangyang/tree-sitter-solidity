const PRECEDENCE = {
    COMMENT: 1,
    NON_EMPTY_STRING: 2,
    EMPTY_STRING:3,

    COMMA: -1,
    OBJECT: -1,
    USER_TYPE: 1,
    DECLARATION: 1,
    ASSIGN: 0,
    TERNARY: 1,
    OR: 2,
    AND: 3,
    REL: 4,
    PLUS: 5,
    TIMES: 6,
    EXP: 7,
    TYPEOF: 8,
    DELETE: 8,
    VOID: 8,
    NOT: 9,
    NEG: 10,
    INC: 11,
    CALL: 12,
    NEW: 13,
    REVERT: 14,
    MEMBER: 1
}

module.exports = grammar({
  name: 'solidity',

  rules: {
    // Declarations
    
    // Definitions
    
    // Statements
    
    // Expressions
    expression: $ => choice(
        $.literal
    ),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityParser.literal
    literal: $ => choice(
        $.string_literal,
        $.number_literal,
        $.boolean_literal,
        $.hex_string_literal,
        $.unicode_string_literal
    ),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityParser.stringLiteral
    string_literal: $ => prec.left(repeat1(choice(
        $.non_empty_string_literal,
        $.empty_string_literal
    ))),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityParser.numberLiteral
    number_literal: $ => choice(
        seq(
           choice($.decimal_number, $.hex_number),
           optional($.number_unit)
        )
    ),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityParser.booleanLiteral
    boolean_literal: $ => choice(
        'true',
        'false'
    ),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityParser.hexStringLiteral
    hex_string_literal: $ => prec.left(repeat1(
        $.hex_string
    )),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.UnicodeStringLiteral
    unicode_string_literal: $ => prec.left(repeat1(seq(
        'unicode',
        choice(
            seq('"', optional(repeat(choice(/~["\r\n\\]/, $.escape_sequence))), '"'),
            seq('\'', optional(repeat(choice(/~['\r\n\\]/, $.escape_sequence))), '\''),
    )))),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.HexString
    hex_string: $ => seq(
        'hex',
        choice(
            seq('"', optional(repeat(seq(/([a-fA-F0-9][a-fA-F0-9])/, optional('_')))), '"'),
            seq('\'', optional(repeat(seq(/([a-fA-F0-9][a-fA-F0-9])/, optional('_')))), '\''),
        )
    ),
        
    // Types
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityParser.typeName
    type_name: $ => choice(
        $.elementary_type_name
    ),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityParser.elementaryTypeName
    elementary_type_name: $ => choice(
        seq('address', optional('payable')),
        'bool',
        'string',
        'bytes',
        $.signed_integer_type,
        $.unsigned_integer_type,
        $.fixed_bytes,
        'fixed',
        'ufixed'
    ),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.SignedIntegerType
    signed_integer_type : $ => choice('int', 'int8', 'int16', 'int24', 'int32', 'int40', 'int48', 'int56', 'int64', 'int72', 'int80', 'int88', 'int96', 'int104', 'int112', 'int120', 'int128', 'int136', 'int144', 'int152', 'int160', 'int168', 'int176', 'int184', 'int192', 'int200', 'int208', 'int216', 'int224', 'int232', 'int240', 'int248', 'int256',),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.UnsignedIntegerType
    unsigned_integer_type : $ => choice('uint', 'uint8', 'uint16', 'uint24', 'uint32', 'uint40', 'uint48', 'uint56', 'uint64', 'uint72', 'uint80', 'uint88', 'uint96', 'uint104', 'uint112', 'uint120', 'uint128', 'uint136', 'uint144', 'uint152', 'uint160', 'uint168', 'uint176', 'uint184', 'uint192', 'uint200', 'uint208', 'uint216', 'uint224', 'uint232', 'uint240', 'uint248', 'uint256',),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.FixedBytes
    fixed_bytes : $ => choice('bytes1', 'bytes2', 'bytes3', 'bytes4', 'bytes5', 'bytes6', 'bytes7', 'bytes8', 'bytes9', 'bytes10', 'bytes11', 'bytes12', 'bytes13', 'bytes14', 'bytes15', 'bytes16', 'bytes17', 'bytes18', 'bytes19', 'bytes20', 'bytes21', 'bytes22', 'bytes23', 'bytes24', 'bytes25', 'bytes26', 'bytes27', 'bytes28', 'bytes29', 'bytes30', 'bytes31', 'bytes32',),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.DecimalNumber
    decimal_number: $ =>  choice(
        /(\d|_)+(\.(\d|_)+)?([eE](-)?(\d|_)+)?/,
        /\.(\d|_)+([eE](-)?(\d|_)+)?/,
    ),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.HexNumber
    hex_number: $ => /0[xX]([a-fA-F0-9][a-fA-F0-9]?_?)+/,
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.NumberUnit
    number_unit : $ => choice('wei', 'gwei', 'ether', 'seconds', 'minutes', 'hours', 'days', 'weeks', 'years'),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.EscapeSequence
    escape_sequence: $ => token.immediate(seq(
        '\\',
        choice(
            /['"\\nrt\n\r]/,
            /u[0-9a-fA-F]{4}/,
            /x[0-9a-fA-F]{2}/
        )
    )),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.NonEmptyStringLiteral
    non_empty_string_literal: $ => prec(PRECEDENCE.NON_EMPTY_STRING, choice(
        seq(
            '"',
            repeat(choice(
                $.double_quoted_printable,
                $.escape_sequence
            )),
            '"'
        ),
        seq(
            '\'',
            repeat(choice(
                $.single_quoted_printable,
                $.escape_sequence
            )),
            '\''
        ),
    )),
   
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.SingleQuotedPrintable
    single_quoted_printable: $ => /[\u0020-\u0026\u0028-\u005B\u005D-\u007E]/,
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.DoubleQuotedPrintable
    double_quoted_printable: $ => /[\u0020-\u0021\u0023-\u005B\u005D-\u007E]/,
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.EmptyStringLiteral
    empty_string_literal: $ => prec(PRECEDENCE.EMPTY_STRING, choice(
        seq('"', '"'),
        seq('\'', '\'')
    )),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityParser.dataLocation
    data_location: $ => choice('memory', 'storage', 'calldata'),
    
    // https://docs.soliditylang.org/en/v0.8.19/grammar.html#a4.SolidityLexer.Identifier
    
    // Patterns 
    
  }
});