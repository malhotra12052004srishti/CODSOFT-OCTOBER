#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;

    std::cout << "Enter a sentence or a phrase: ";
    std::getline(std::cin, input);

    std::istringstream iss(input);

    int wordCount = 0;
    std::string word;

    while (iss >> word) {
        wordCount++;
    }

    std::cout << "Word count: " << wordCount << std::endl;

    return 0;
}
