#include "file_ops.h"
#include &lt;fstream&gt;
#include &lt;string&gt;

std::string FileOps::read_file(const std::string&amp; filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return "";  // Return empty string on error
    }
    // Read entire file into string
    std::string content((std::istreambuf_iterator&lt;char&gt;(file)), std::istreambuf_iterator&lt;char&gt;());
    return content;
}

bool FileOps::search_word(const std::string&amp; filename, const std::string&amp; word) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return false;  // Return false on error
    }
    std::string line;
    // Check each line for the word
    while (std::getline(file, line)) {
        if (line.find(word) != std::string::npos) {
            return true;
        }
    }
    return false;
}