#include "ZadKcpp.h"

// Konstruktor i destruktor
ZadKcpp::ZadKcpp() : width(0), height(0) {}
ZadKcpp::~ZadKcpp() {}

// Implementacja metod dla różnych zadań

void ZadKcpp::ZadanieProstokat() {
    width = 5;
    height = 10;
    std::cout << "Prostokat o szerokości: " << width << " i wysokości: " << height << std::endl;
    std::cout << "Pole prostokąta: " << width * height << std::endl;
}

void ZadKcpp::ZadanieArytmetykaWskaznikow() {
    int tab[] = {11, 22, 33, 44, 55};
    int* p = &tab[0] + 3;
    std::cout << "*p = " << *p << std::endl;
    p -= 2;
    std::cout << "*p = " << *p << std::endl;
}

void ZadKcpp::ZadanieSzablonFunkcji() {
    int val = 10;
    int& ref = val;
    int* ptr = &val;
    std::cout << "Wartość przez referencję: " << ref << std::endl;
    std::cout << "Wartość przez wskaźnik: " << *ptr << std::endl;
}

void ZadKcpp::ZadanieMakra() {
    #define MY_MACRO 42
    #define SQUARE(x) ((x) * (x))
    std::cout << "MY_MACRO: " << MY_MACRO << std::endl;
    std::cout << "Kwadrat liczby 7: " << SQUARE(7) << std::endl;
}

void ZadKcpp::ZadanieKlasaZmienna() {
    class ExampleClass {
    public:
        int publicVar;
        ExampleClass() : publicVar(0), privateVar(1), protectedVar(2) {}
        void showPublicVar() const { std::cout << "Public var: " << publicVar << std::endl; }
        void showPrivateVar() const;
        void showProtectedVar() const;

    private:
        int privateVar;
    protected:
        int protectedVar;
    };

    ExampleClass example;
    example.showPublicVar();
}
