/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "asciicanvas",

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice($.text, $.white, $.black, $.red, $.blue, $.yellow, $.green),

    white: ($) => /#+/,
    black: ($) => /@+/,
    red: ($) => /R+/,
    blue: ($) => /B+/,
    yellow: ($) => /Y+/,
    green: ($) => /G+/,
    text: ($) => seq('"', /[^"]+/, '"'),
  },
});
