// LStringStream.cc
#include <iostream>
#include <sstream>
#include <string>

int main() {
    // Przykład konwersji int na string i odwrotnie
    int number = 123;
    std::stringstream ss;

    // Konwersja int na string
    ss << number;
    std::string numberAsString = ss.str();
    std::cout << "Liczba jako string: " << numberAsString << std::endl;

    // Czyszczenie stringstream przed ponownym użyciem
    ss.str("");
    ss.clear();

    // Konwersja string na int
    std::string str = "456";
    int convertedNumber;
    ss << str;
    ss >> convertedNumber;
    std::cout << "String jako liczba: " << convertedNumber << std::endl;

    // Przykład dzielenia tekstu na słowa
    std::string sentence = "Student government election campaign";
    ss.str(sentence);
    ss.clear();
    std::string word;

    std::cout << "Podzielone słowa:" << std::endl;
    while (ss >> word) {
        std::cout << word << std::endl;
    }

    return 0;
}
