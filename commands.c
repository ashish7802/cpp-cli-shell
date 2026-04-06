#include "commands.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "file_ops.h"

void handle_hello() {
    printf("Hello, World!\n");
}

void handle_add(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void handle_exit() {
    printf("Exiting...\n");
    exit(0);
}

void handle_read_file(const char* filename) {
    char* content = read_file(filename);
    if (content) {
        printf("File content:\n%s\n", content);
        free(content);
    } else {
        printf("Error reading file.\n");
    }
}

void handle_search_word(const char* filename, const char* word) {
    if (search_word(filename, word)) {
        printf("Word '%s' found in file.\n", word);
    } else {
        printf("Word '%s' not found in file.\n", word);
    }
}