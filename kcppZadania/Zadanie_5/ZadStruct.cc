// ZadStruct.cc
#include <iostream>
#include <string>

// Deklaracja struktury
struct Person {
    std::string name;   // Zmienna przechowująca imię
    int age;           // Zmienna przechowująca wiek

    // Konstruktor z listą inicjalizacyjną
    Person(const std::string& n, int a) : name(n), age(a) {}
    
    // Funkcja do wyświetlania informacji o osobie
    void display() const {
        std::cout << "Imię: " << name << ", Wiek: " << age << " lat\n";
    }
};

int main() {
    // Definicja obiektu z użyciem konstruktora
    Person person1("Jan", 25);
    
    // Wyświetlenie wartości początkowych
    person1.display();

    // Zmiana wartości
    person1.name = "Anna"; // Zmiana imienia
    person1.age = 30;      // Zmiana wieku

    // Odczyt zmienionych wartości
    std::cout << "Po zmianach:\n";
    person1.display();

    // Definicja kolejnego obiektu
    Person person2("Maria", 22);
    
    // Wyświetlenie wartości początkowych drugiego obiektu
    person2.display();

    return 0;
}
