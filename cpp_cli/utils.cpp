#include "utils.h"
#include &lt;algorithm&gt;
#include &lt;cctype&gt;

std::string Utils::trim(const std::string&amp; str) {
    // Find first non-whitespace character
    auto start = std::find_if_not(str.begin(), str.end(), ::isspace);
    // Find last non-whitespace character
    auto end = std::find_if_not(str.rbegin(), str.rend(), ::isspace).base();
    // Return trimmed substring
    return (start &lt; end) ? std::string(start, end) : std::string();
}