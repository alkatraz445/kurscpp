// ZadParzystaCase.cc
#include <iostream>

// Funkcja (a): Sprawdzanie parzystości z użyciem operacji bitowej &
bool isEvenBitwise(int number) {
    // Jeśli ostatni bit liczby jest 0, liczba jest parzysta; jeśli 1, to nieparzysta.
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
    int number, choice;

    std::cout << "Podaj liczbę: ";
    std::cin >> number;

    std::cout << "Wybierz metodę sprawdzania:\n";
    std::cout << "1. Operacja bitowa (&)\n";
    std::cout << "2. Operacja modulo (%)\n";
    std::cout << "3. Operator warunkowy (?:)\n";
    std::cout << "Wybór: ";
    std::cin >> choice;

    bool result;

    switch (choice) {
        case 1:
            result = isEvenBitwise(number);
            std::cout << "Sprawdzanie operacją bitową: ";
            break;
        case 2:
            result = isEvenModulo(number);
            std::cout << "Sprawdzanie operacją modulo: ";
            break;
        case 3:
            result = isEvenConditional(number);
            std::cout << "Sprawdzanie operatorem warunkowym: ";
            break;
        default:
            std::cout << "Nieprawidłowy wybór.\n";
            return 1;
    }

    std::cout << (result ? "parzysta" : "nieparzysta") << "\n";

    return 0;
}
