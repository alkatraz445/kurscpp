// ZadStructKonstruktor.cc
#include <iostream>
#include <cstring>

struct Car {
    // Zmienne członkowskie
    char model[20];
    int year;

    // Domyślny konstruktor
    Car() {
        strcpy(model, "Nieznany");
        year = 0;
        std::cout << "Domyślny konstruktor: " << model << ", Rok: " << year << "\n";
    }

    // Konstruktor z argumentami
    Car(const char* m, int y) : year(y) {
        strcpy(model, m);
        std::cout << "Konstruktor z argumentami: " << model << ", Rok: " << year << "\n";
    }

    // Domyślny destruktor
    ~Car() {
        std::cout << "Destruktor dla: " << model << "\n";
    }

    // Funkcja do wyświetlania danych
    void display() const {
        std::cout << "Model: " << model << ", Rok: " << year << "\n";
    }
};

int main() {
    Car car1; // Wywołanie domyślnego konstruktora
    car1.display();

    Car car2("Toyota", 2020); // Wywołanie konstruktora z argumentami
    car2.display();

    return 0;
}
