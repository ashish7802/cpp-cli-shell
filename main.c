#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include "commands.h"
#include "utils.h"

int main() {
    char input[256];
    printf("Welcome to CLI Toolkit. Type 'exit' to quit.\n");
    while (1) {
        printf("&gt; ");
        if (fgets(input, sizeof(input), stdin) == NULL) break;
        input[strcspn(input, "\n")] = 0; // remove newline
        char* trimmed = trim(input);
        if (strlen(trimmed) == 0) continue;
        int count;
        char** tokens = split_string(trimmed, &amp;count);
        if (strcmp(tokens[0], "hello") == 0) {
            handle_hello();
        } else if (strcmp(tokens[0], "add") == 0 &amp;&amp; count &gt;= 3) {
            int a = atoi(tokens[1]);
            int b = atoi(tokens[2]);
            handle_add(a, b);
        } else if (strcmp(tokens[0], "exit") == 0) {
            handle_exit();
        } else if (strcmp(tokens[0], "read") == 0 &amp;&amp; count &gt;= 2) {
            handle_read_file(tokens[1]);
        } else if (strcmp(tokens[0], "search") == 0 &amp;&amp; count &gt;= 3) {
            handle_search_word(tokens[1], tokens[2]);
        } else {
            printf("Unknown command. Available: hello, add &lt;a&gt; &lt;b&gt;, read &lt;file&gt;, search &lt;file&gt; &lt;word&gt;, exit\n");
        }
        // Free tokens
        for (int i = 0; i &lt; count; i++) {
            free(tokens[i]);
        }
        free(tokens);
    }
    return 0;
}