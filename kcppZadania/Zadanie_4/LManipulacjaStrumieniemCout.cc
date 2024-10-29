// LManipulacjaStrumieniemCout.cc
#include <iostream>
#include <iomanip>

int main() {
    float result1 = 5.123456f;
    float result2 = 12.987654f;
    float w = 16.0f;
    float average = (result1 + result2 + w) / 3;

    // Wyświetlenie nagłówka
    std::cout << "==================================================\n";
    std::cout << "Wynika naszego działania: " << std::fixed << std::setprecision(5) << w
              << " jest niepoprawny ale:\n";

    // Wynik 1: Formatowanie z ustawioną szerokością i precyzją
    std::cout << std::setw(10) << "output:   " << std::setw(8) << std::fixed << std::setprecision(3) << result1 
              << "    T:  " << std::setw(6) << std::setprecision(3) << w << "\n";

    // Wynik 2: Formatowanie z większą precyzją
    std::cout << std::setw(10) << "output1:  " << std::setw(8) << std::fixed << std::setprecision(4) << result1 
              << "   T: " << std::setw(8) << std::setprecision(5) << result2 << "\n";

    // Wynik 3: Kolejna precyzja
    std::cout << std::setw(10) << "output2:  " << std::setw(8) << std::fixed << std::setprecision(4) << result2 
              << "   T: " << std::setw(8) << std::setprecision(6) << result2 << "\n";

    // Wyświetlenie linii oddzielającej
    std::cout << "---------------------------------\n";

    // Średnia: formatowanie w inny sposób
    std::cout << std::setw(10) << "average:  " << std::setw(8) << std::fixed << std::setprecision(4) << average 
              << "   T: " << std::setw(8) << std::setprecision(6) << average << "\n";

    // Wyświetlenie zakończenia
    std::cout << "==================================================\n";

    return 0;
}
