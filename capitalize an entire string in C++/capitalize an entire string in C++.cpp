#include <iostream>
#include <string>
#include <algorithm>

std::string capitalize_string(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    return s;
}

int main() {
    std::string str = "follow for more";
    std::cout << capitalize_string(str) << std::endl;
    // Output: FOLLOW FOR MORE
    return 0;
}
