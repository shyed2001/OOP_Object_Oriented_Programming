<<<<<<< Updated upstream
<<<<<<< Updated upstream
///Write a program in C++ that display entered string into reverse order.
/// MCE 07905536 Shyed

#include <iostream>
#include <string>

int main() {
    // Get input from the user
    std::cout << "Enter a string: ";
    std::string inputString;
    std::getline(std::cin, inputString);

    // Check if the input string is empty
    if (inputString.empty()) {
        std::cerr << "Error: The input string is empty." << std::endl;
        return 1; // Return an error code
    }

    // Check if the input string length exceeds a certain limit (e.g., 1000)
    const size_t maxLength = 1000;
    if (inputString.length() > maxLength) {
        std::cerr << "Error: The input string exceeds the maximum allowed length." << std::endl;
        return 1; // Return an error code
    }

    // Find the length of the string
    size_t length = inputString.length();

    // Reverse the string
    for (size_t i = 0; i < length / 2; ++i) {
        // Swap characters from the beginning and end of the string
        std::swap(inputString[i], inputString[length - 1 - i]);
    }

    // Display the reversed string
    std::cout << "Reversed string: " << inputString << std::endl;

    return 0;
}
=======
=======
>>>>>>> Stashed changes
///Write a program in C++ that display entered string into reverse order.
/// MCE 07905536 Shyed

#include <iostream>
#include <string>

int main() {
    // Get input from the user
    std::cout << "Enter a string: ";
    std::string inputString;
    std::getline(std::cin, inputString);

    // Check if the input string is empty
    if (inputString.empty()) {
        std::cerr << "Error: The input string is empty." << std::endl;
        return 1; // Return an error code
    }

    // Check if the input string length exceeds a certain limit (e.g., 1000)
    const size_t maxLength = 1000;
    if (inputString.length() > maxLength) {
        std::cerr << "Error: The input string exceeds the maximum allowed length." << std::endl;
        return 1; // Return an error code
    }

    // Find the length of the string
    size_t length = inputString.length();

    // Reverse the string
    for (size_t i = 0; i < length / 2; ++i) {
        // Swap characters from the beginning and end of the string
        std::swap(inputString[i], inputString[length - 1 - i]);
    }

    // Display the reversed string
    std::cout << "Reversed string: " << inputString << std::endl;

    return 0;
}
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
