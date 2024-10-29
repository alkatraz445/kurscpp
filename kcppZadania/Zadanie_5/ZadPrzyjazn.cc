// ZadPrzyjazn.cc
#include <iostream>

class A; // Deklaracja klasy A

class B {
public:
    void showA(const A& a); // Deklaracja metody do pokazywania wartości z A
};

class A {
private:
    int value;

public:
    // Konstruktor do inicjalizacji value
    A(int v) : value(v) {}

    // Udzielamy przyjaźni klasie B
    friend class B; 
};

// Definicja metody klasy B
void B::showA(const A& a) {
    // B ma dostęp do prywatnych składników klasy A
    std::cout << "Wartość w klasie A: " << a.value << std::endl;
}

int main() {
    A a(10); // Tworzenie obiektu klasy A
    B b;     // Tworzenie obiektu klasy B

    // Klasa B może uzyskać dostęp do prywatnego składnika klasy A
    b.showA(a);

    // Komentarz o przyjaźni
    // Klasa A nie ma dostępu do prywatnych składników klasy B,
    // chyba że przyznana jest przyjaźń (co nie jest zdefiniowane w tym przypadku).

    return 0;
}
