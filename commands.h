#ifndef COMMANDS_H
#define COMMANDS_H

// Command handlers
void handle_hello();
void handle_add(int a, int b);
void handle_exit();
void handle_read_file(const char* filename);
void handle_search_word(const char* filename, const char* word);

#endif