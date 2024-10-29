// ZadPreprocesor.cc
#include <iostream>
#include <string>

// Definiowanie makra MY_MACRO jeśli nie jest zdefiniowane
#ifndef MY_MACRO
#define MY_MACRO 10
#endif

// Przykład dyrektywy #ifdef i #else
#ifdef MY_MACRO
    #define USE_MACRO_VERSION
#else
    #define NO_MACRO_VERSION
#endif

// Przykład użycia makra
#define SQUARE(x) ((x) * (x))  // Makro obliczające kwadrat liczby

// Przykład użycia # i ## w makrach
#define TO_STRING(x) #x        // Makro konwertujące argument na tekst
#define CONCATENATE(a, b) a##b // Makro łączące dwa argumenty

void withoutPreprocessor() {
    std::cout << "Kod bez użycia dyrektyw preprocesora:\n";
    int value = 5;
    int result = value * value;
    std::cout << "Kwadrat liczby " << value << " bez użycia makra: " << result << "\n";

    // Konwersja na tekst
    std::string str = "tekst";
    std::cout << "Konwersja na tekst bez # w makrze: " << str << "\n";

    // Łączenie dwóch wartości
    int ab = 42;
    std::cout << "Wartość ab bez ## w makrze: " << ab << "\n";
}

void withPreprocessor() {
    std::cout << "Kod z użyciem dyrektyw preprocesora:\n";

    // Sprawdzenie, czy MY_MACRO jest zdefiniowane
    #ifdef USE_MACRO_VERSION
    std::cout << "MY_MACRO jest zdefiniowane. Wartość MY_MACRO: " << MY_MACRO << "\n";
    #else
    std::cout << "MY_MACRO nie jest zdefiniowane.\n";
    #endif

    // Użycie makra SQUARE
    int value = 5;
    std::cout << "Kwadrat liczby " << value << " z użyciem makra: " << SQUARE(value) << "\n";

    // Użycie makra TO_STRING z #
    std::cout << "Konwersja na tekst z użyciem #: " << TO_STRING(tekst) << "\n";

    // Użycie makra CONCATENATE z ##
    int ab = 42;
    std::cout << "Wartość ab z użyciem ##: " << CONCATENATE(a, b) << "\n";
}

int main() {
    withoutPreprocessor();
    std::cout << "------------------------------------\n";
    withPreprocessor();
    return 0;
}
