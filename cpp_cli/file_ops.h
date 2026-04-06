#ifndef FILE_OPS_H
#define FILE_OPS_H

#include &lt;string&gt;

class FileOps {
public:
    // Reads the entire content of a file into a string
    static std::string read_file(const std::string&amp; filename);
    // Searches for a word in a file and returns true if found
    static bool search_word(const std::string&amp; filename, const std::string&amp; word);
};

#endif