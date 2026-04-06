#ifndef UTILS_H
#define UTILS_H

#include &lt;string.h&gt;

// Function to trim whitespace from string (modifies in place)
char* trim(char* str);

// Function to split string by space, return array of strings
char** split_string(char* str, int* count);

#endif