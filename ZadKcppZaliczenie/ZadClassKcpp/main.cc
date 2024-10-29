#include "include/ZadKcpp.h"

void Menu() {
    std::cout << "Menu programu:\n";
    std::cout << "1. Prostokąt - ustawianie i odczyt parametrów\n";
    std::cout << "2. Arytmetyka wskaźników\n";
    std::cout << "3. Szablon funkcji\n";
    std::cout << "4. Makra preprocesora\n";
    std::cout << "5. Klasa i zmienne publiczne, prywatne, chronione\n";
    std::cout << "Wybierz numer zadania: ";
}

int main() {
    ZadKcpp zad;
    int wybor;

    while (true) {
        Menu();
        std::cin >> wybor;

        switch (wybor) {
            case 1:
                zad.ZadanieProstokat();
                break;
            case 2:
                zad.ZadanieArytmetykaWskaznikow();
                break;
            case 3:
                zad.ZadanieSzablonFunkcji();
                break;
            case 4:
                zad.ZadanieMakra();
                break;
            case 5:
                zad.ZadanieKlasaZmienna();
                break;
            default:
                std::cout << "Nieprawidłowy wybór. Spróbuj ponownie.\n";
                break;
        }

        char kontynuacja;
        std::cout << "Czy chcesz kontynuować? (t/n): ";
        std::cin >> kontynuacja;
        if (kontynuacja == 'n' || kontynuacja == 'N') break;
    }

    return 0;
}
