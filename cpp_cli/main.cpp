#include &lt;iostream&gt;
#include &lt;string&gt;
#include "parser.h"
#include "commands.h"
#include "utils.h"

int main() {
    Parser parser;
    CommandHandler handler;
    std::string input;
    std::cout &lt;&lt; "Welcome to CLI Shell. Type 'exit' to quit." &lt;&lt; std::endl;
    while (true) {
        std::cout &lt;&lt; "&gt; ";
        std::getline(std::cin, input);
        std::string trimmed = Utils::trim(input);
        if (trimmed.empty()) continue;
        std::vector&lt;std::string&gt; tokens = parser.tokenize(trimmed);
        handler.execute(tokens);
    }
    return 0;
}