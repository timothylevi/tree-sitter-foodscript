module.exports = grammar({
  name: 'FoodScript',

  // TODO: Include blocks, statements

  rules: {
    program: $ => repeat(choice($.keyword, $.token, $.command)),

    type: $ => alias($.token, 'type'),

    // block: $ => /\t/,
    // block: $ => prec.left(repeat1(/\s\s/)),
    // block: $ => /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/,

    keyword: $ => choice(
      $._keyword_if,
      $._keyword_else_if,
      $._keyword_else
    ),
    _keyword_if: $ => seq(/if/, $.command),
    _keyword_else_if: $ => seq(/else if/, $.command),
    _keyword_else: $ => /else/,

    command: $ => choice(
      $._command_condition,
      $._command_make,
      $._command_single_arg,
      $._command_multi_arg,
      $._command_split,
    ),
    _command_multi_arg: $ => seq(/from-combine/, $._command_arg_list),
    _command_single_arg: $ => seq(/get|from-slice|from-take|grill/, $.token),
    _command_make: $ => seq(/make/, $.token, $.command),
    _command_split: $ => choice($.__command_make_as_a, $.__command_spread_on, $.__command_add_to),
    _command_condition: $ => seq($.token, /\w+(?:-\w+)+\?/),
    _command_arg_list: $ => seq(/\(/, repeat1(seq($.token, /,/)), $.token, /\)/),
    __command_spread_on: $ => seq(/spread/, $.token, /on/, $.token),
    __command_add_to: $ => seq(/add/, $.token, /to/, $.token),
    __command_make_as_a: $ => seq(/make/, $.token, /as-a/, $.type),

    token: $ => choice(
      $._token_multi_word,
      $._token_single_word,
      $._token_special_char
    ),
    _token_multi_word: $ => /\w+(?:-\w+)+/,
    _token_single_word: $ => /\w+/,
    _token_special_char: $ =>  /\(|\)|,/,
  }
});
