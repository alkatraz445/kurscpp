// ZadParzysta.cc
#include <iostream>

// Funkcja (a): Sprawdzanie parzystości z użyciem operacji bitowej &
bool isEvenBitwise(int number) {
    // Wykorzystujemy operację & (bitwise AND)
    // Jeśli ostatni bit liczby jest 0, liczba jest parzysta; jeśli 1, to nieparzysta.
    // Przykład dla liczby 4 (binarnie 100):
    // 4 & 1 = 0, czyli parzysta
    // Przykład dla liczby 5 (binarnie 101):
    // 5 & 1 = 1, czyli nieparzysta
    return (number & 1) == 0;
}

// Funkcja (b): Sprawdzanie parzystości z użyciem operatora modulo
bool isEvenModulo(int number) {
    return (number % 2) == 0;
}

// Funkcja (c): Sprawdzanie parzystości z użyciem operatora warunkowego
bool isEvenConditional(int number) {
    // Używamy operatora warunkowego ? :
    return (number % 2 == 0) ? true : false;
}

int main() {
    int number;

    std::cout << "Podaj liczbę: ";
    std::cin >> number;

    // Sprawdzanie i wyświetlanie wyniku dla każdej z funkcji
    std::cout << "Sprawdzanie operacją bitową: ";
    std::cout << (isEvenBitwise(number) ? "parzysta" : "nieparzysta") << "\n";

    std::cout << "Sprawdzanie operacją modulo: ";
    std::cout << (isEvenModulo(number) ? "parzysta" : "nieparzysta") << "\n";

    std::cout << "Sprawdzanie operatorem warunkowym: ";
    std::cout << (isEvenConditional(number) ? "parzysta" : "nieparzysta") << "\n";

    return 0;
}
