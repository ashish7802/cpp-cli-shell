#include "commands.h"
#include &lt;iostream&gt;
#include &lt;cstdlib&gt;
#include "file_ops.h"

void CommandHandler::execute(const std::vector&lt;std::string&gt;&amp; tokens) {
    if (tokens.empty()) return;
    std::string cmd = tokens[0];
    if (cmd == "hello") {
        handle_hello();
    } else if (cmd == "add" &amp;&amp; tokens.size() &gt;= 3) {
        handle_add(tokens);
    } else if (cmd == "exit") {
        handle_exit();
    } else if (cmd == "read" &amp;&amp; tokens.size() &gt;= 2) {
        handle_read(tokens);
    } else if (cmd == "search" &amp;&amp; tokens.size() &gt;= 3) {
        handle_search(tokens);
    } else {
        std::cout &lt;&lt; "Unknown command." &lt;&lt; std::endl;
    }
}

void CommandHandler::handle_hello() {
    std::cout &lt;&lt; "Hello, World!" &lt;&lt; std::endl;
}

void CommandHandler::handle_add(const std::vector&lt;std::string&gt;&amp; tokens) {
    try {
        int a = std::stoi(tokens[1]);
        int b = std::stoi(tokens[2]);
        std::cout &lt;&lt; a &lt;&lt; " + " &lt;&lt; b &lt;&lt; " = " &lt;&lt; (a + b) &lt;&lt; std::endl;
    } catch (...) {
        std::cout &lt;&lt; "Invalid numbers." &lt;&lt; std::endl;
    }
}

void CommandHandler::handle_exit() {
    std::cout &lt;&lt; "Exiting..." &lt;&lt; std::endl;
    std::exit(0);
}

void CommandHandler::handle_read(const std::vector&lt;std::string&gt;&amp; tokens) {
    std::string content = FileOps::read_file(tokens[1]);
    if (content.empty()) {
        std::cout &lt;&lt; "Error reading file." &lt;&lt; std::endl;
    } else {
        std::cout &lt;&lt; "File content:" &lt;&lt; std::endl &lt;&lt; content &lt;&lt; std::endl;
    }
}

void CommandHandler::handle_search(const std::vector&lt;std::string&gt;&amp; tokens) {
    bool found = FileOps::search_word(tokens[1], tokens[2]);
    if (found) {
        std::cout &lt;&lt; "Word '" &lt;&lt; tokens[2] &lt;&lt; "' found in file." &lt;&lt; std::endl;
    } else {
        std::cout &lt;&lt; "Word '" &lt;&lt; tokens[2] &lt;&lt; "' not found in file." &lt;&lt; std::endl;
    }
}