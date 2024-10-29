// ZadKlasaKonstruktor.cc
#include <iostream>
#include <string>

class Person {
public:
    // Zmienne członkowskie
    std::string name;
    int age;

    // Domyślny konstruktor
    Person() : name("Nieznany"), age(0) {
        std::cout << "Domyślny konstruktor: " << name << ", Wiek: " << age << "\n";
    }

    // Konstruktor z argumentami
    Person(const std::string& n, int a) : name(n), age(a) {
        std::cout << "Konstruktor z argumentami: " << name << ", Wiek: " << age << "\n";
    }

    // Domyślny destruktor
    ~Person() {
        std::cout << "Destruktor dla: " << name << "\n";
    }

    // Funkcja do wyświetlania danych
    void display() const {
        std::cout << "Imię: " << name << ", Wiek: " << age << " lat\n";
    }
};

int main() {
    Person person1; // Wywołanie domyślnego konstruktora
    person1.display();

    Person person2("Anna", 30); // Wywołanie konstruktora z argumentami
    person2.display();

    return 0;
}
