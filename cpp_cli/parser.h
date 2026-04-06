#ifndef PARSER_H
#define PARSER_H

#include &lt;vector&gt;
#include &lt;string&gt;

class Parser {
public:
    // Tokenizes the input string into a vector of strings, splitting by whitespace
    std::vector&lt;std::string&gt; tokenize(const std::string&amp; input);
};

#endif