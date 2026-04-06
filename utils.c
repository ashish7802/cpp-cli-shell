#include "utils.h"
#include &lt;stdlib.h&gt;
#include &lt;ctype.h&gt;
#include &lt;string.h&gt;

char* trim(char* str) {
    char* end;
    while (isspace((unsigned char)*str)) str++;
    if (*str == 0) return str;
    end = str + strlen(str) - 1;
    while (end &gt; str &amp;&amp; isspace((unsigned char)*end)) end--;
    end[1] = '\0';
    return str;
}

char** split_string(char* str, int* count) {
    char** tokens = malloc(10 * sizeof(char*)); // assume max 10 tokens
    char* token = strtok(str, " ");
    *count = 0;
    while (token != NULL &amp;&amp; *count &lt; 10) {
        tokens[*count] = strdup(token); // duplicate the token
        (*count)++;
        token = strtok(NULL, " ");
    }
    return tokens;
}