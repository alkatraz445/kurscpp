// ZadSwitch.cc
#include <iostream>
#include <string>

// Funkcja (a): Sprawdzanie parzystości z użyciem operacji bitowej &
bool isEvenBitwise(int number) {
    return (number & 1) == 0;
}

// Funkcja (b): Sprawdzanie parzystości z użyciem operatora modulo
bool isEvenModulo(int number) {
    return (number % 2) == 0;
}

// Funkcja (c): Sprawdzanie parzystości z użyciem operatora warunkowego
bool isEvenConditional(int number) {
    return (number % 2 == 0) ? true : false;
}

int main() {
    int number;
    std::string method;

    std::cout << "Podaj liczbę: ";
    std::cin >> number;

    std::cout << "Wybierz metodę sprawdzania ('bitwise', 'modulo', 'conditional'): ";
    std::cin >> method;

    bool result;

    // Wybór metody sprawdzania parzystości za pomocą struktury if-else zamiast switch
    if (method == "bitwise") {
        result = isEvenBitwise(number);
        std::cout << "Sprawdzanie operacją bitową: ";
    } else if (method == "modulo") {
        result = isEvenModulo(number);
        std::cout << "Sprawdzanie operacją modulo: ";
    } else if (method == "conditional") {
        result = isEvenConditional(number);
        std::cout << "Sprawdzanie operatorem warunkowym: ";
    } else {
        std::cout << "Nieprawidłowa metoda.\n";
        return 1;
    }

    std::cout << (result ? "parzysta" : "nieparzysta") << "\n";

    return 0;
}
