#ifndef COMMANDS_H
#define COMMANDS_H

#include &lt;vector&gt;
#include &lt;string&gt;

class CommandHandler {
public:
    // Executes the command based on the tokenized input
    void execute(const std::vector&lt;std::string&gt;&amp; tokens);
private:
    // Individual command handlers
    void handle_hello();
    void handle_add(const std::vector&lt;std::string&gt;&amp; tokens);
    void handle_exit();
    void handle_read(const std::vector&lt;std::string&gt;&amp; tokens);
    void handle_search(const std::vector&lt;std::string&gt;&amp; tokens);
};

#endif