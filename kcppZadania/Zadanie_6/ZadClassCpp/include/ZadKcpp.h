#ifndef ZADKCPP_H
#define ZADKCPP_H

#include <iostream>
#include <string>
#include <vector>

class ZadKcpp {
public:
    // Konstruktory i destruktory
    ZadKcpp();
    ~ZadKcpp();

    // Metody reprezentujące różne zadania
    void ZadanieProstokat();              // Prostokąt z zadaniem ustawiania parametrów i odczytu
    void ZadanieArytmetykaWskaznikow();    // Arytmetyka wskaźników
    void ZadanieSzablonFunkcji();          // Funkcje zwracające różne typy danych
    void ZadanieMakra();                   // Przykład dyrektyw preprocesora
    void ZadanieKlasaZmienna();            // Przykład z dostępem do zmiennych publicznych, prywatnych, chronionych

private:
    // Możemy dodać prywatne zmienne do użytku w zadaniach, np. szerokość i wysokość dla prostokąta
    int width, height;
};

#endif
