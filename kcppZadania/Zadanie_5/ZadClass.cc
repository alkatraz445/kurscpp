// ZadClass.cc
#include <iostream>
#include <string>

class ExampleClass {
public:
    // Zmienna publiczna
    std::string publicVar;

    // Konstruktor z inicjalizacją zmiennych
    ExampleClass() : publicVar("Domyślna wartość"), privateVar(0), protectedVar(1) {}

    // Funkcja inline deklarowana i definiowana w klasie
    inline void showPublicVar() const {
        std::cout << "Zmienna publiczna: " << publicVar << "\n";
    }

    // Deklaracja metody dostępnej poza klasą, która uzyskuje dostęp do zmiennej prywatnej
    void showPrivateVar() const;

    // Deklaracja metody dostępnej poza klasą, która uzyskuje dostęp do zmiennej chronionej
    void showProtectedVar() const;

private:
    // Zmienna prywatna
    int privateVar;

    // Prywatna metoda inline
    inline void incrementPrivateVar() {
        privateVar++;
    }

protected:
    // Zmienna chroniona
    int protectedVar;

    // Chroniona metoda inline
    inline void decrementProtectedVar() {
        protectedVar--;
    }
};

// Definicja metody poza klasą, dostęp do zmiennej prywatnej
void ExampleClass::showPrivateVar() const {
    std::cout << "Zmienna prywatna: " << privateVar << "\n";
}

// Definicja metody poza klasą, dostęp do zmiennej chronionej
void ExampleClass::showProtectedVar() const {
    std::cout << "Zmienna chroniona: " << protectedVar << "\n";
}

int main() {
    ExampleClass example;

    // Użycie funkcji publicznej, która odczytuje publiczną zmienną
    example.showPublicVar();

    // Użycie funkcji publicznej, która odczytuje prywatną zmienną
    example.showPrivateVar();

    // Użycie funkcji publicznej, która odczytuje chronioną zmienną
    example.showProtectedVar();

    return 0;
}
