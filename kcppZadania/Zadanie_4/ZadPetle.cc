// ZadPetle.cc
#include <iostream>

// Funkcja (a): Demonstracja pętli while z inkrementacją i przerwaniem
void demoWhile() {
    int i = 0;
    std::cout << "Pętla while:\n";
    while (i < 10) {
        if (i == 5) {
            std::cout << "Break przy i = " << i << "\n";
            break;  // Przerywa działanie pętli, gdy i wynosi 5
        }
        if (i % 2 == 0) {
            std::cout << "Continue przy i = " << i << "\n";
            i++;
            continue;  // Pomija resztę iteracji dla parzystych wartości i
        }
        std::cout << "i = " << i << "\n";
        i++;
    }
    return;  // Powrót z funkcji
}

// Funkcja (b): Demonstracja pętli do-while z inkrementacją i przerwaniem
void demoDoWhile() {
    int i = 0;
    std::cout << "\nPętla do-while:\n";
    do {
        if (i == 5) {
            std::cout << "Break przy i = " << i << "\n";
            break;  // Przerywa działanie pętli, gdy i wynosi 5
        }
        if (i % 2 == 0) {
            std::cout << "Continue przy i = " << i << "\n";
            i++;
            continue;  // Pomija resztę iteracji dla parzystych wartości i
        }
        std::cout << "i = " << i << "\n";
        i++;
    } while (i < 10);
    return;  // Powrót z funkcji
}

// Funkcja (c): Demonstracja pętli for z przerwaniem i pomijaniem iteracji
void demoFor() {
    std::cout << "\nPętla for:\n";
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            std::cout << "Break przy i = " << i << "\n";
            break;  // Przerywa działanie pętli, gdy i wynosi 5
        }
        if (i % 2 == 0) {
            std::cout << "Continue przy i = " << i << "\n";
            continue;  // Pomija resztę iteracji dla parzystych wartości i
        }
        std::cout << "i = " << i << "\n";
    }
    return;  // Powrót z funkcji
}

int main() {
    demoWhile();
    demoDoWhile();
    demoFor();
    return 0;
}
