#include "file_ops.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;

char* read_file(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (!file) return NULL;
    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);
    char* buffer = malloc(length + 1);
    if (!buffer) {
        fclose(file);
        return NULL;
    }
    fread(buffer, 1, length, file);
    buffer[length] = '\0';
    fclose(file);
    return buffer;
}

int search_word(const char* filename, const char* word) {
    FILE* file = fopen(filename, "r");
    if (!file) return 0;
    char line[256];
    int found = 0;
    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, word)) {
            found = 1;
            break;
        }
    }
    fclose(file);
    return found;
}