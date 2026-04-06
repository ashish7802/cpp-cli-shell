#include "parser.h"
#include &lt;sstream&gt;

std::vector&lt;std::string&gt; Parser::tokenize(const std::string&amp; input) {
    std::vector&lt;std::string&gt; tokens;
    std::istringstream iss(input);
    std::string token;
    // Extract tokens separated by whitespace
    while (iss &gt;&gt; token) {
        tokens.push_back(token);
    }
    return tokens;
}