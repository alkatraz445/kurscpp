// ZadUnia.cc
#include <iostream>
#include <cstring>

union Data {
    int intValue;
    float floatValue;
    char strValue[20]; // Uwaga: Maksymalny rozmiar dla łańcucha znaków
};

int main() {
    Data data; // Tworzenie unii

    // Przypisanie wartości całkowitej
    data.intValue = 42;
    std::cout << "Przypisano intValue: " << data.intValue << "\n";
    
    // Przypisanie wartości zmiennoprzecinkowej
    data.floatValue = 3.14f;
    std::cout << "Przypisano floatValue: " << data.floatValue << "\n";
    // Uwaga: Wartość intValue jest teraz niezdefiniowana, ponieważ unia dzieli pamięć

    // Próba odczytania wartości intValue po przypisaniu floatValue
    std::cout << "Odczytanie intValue po przypisaniu floatValue: " << data.intValue << "\n";
    
    // Przypisanie wartości łańcucha znaków
    strcpy(data.strValue, "Hello");
    std::cout << "Przypisano strValue: " << data.strValue << "\n";
    // Uwaga: Wartości intValue i floatValue są teraz niezdefiniowane

    // Próba odczytania innych wartości po przypisaniu strValue
    std::cout << "Odczytanie intValue po przypisaniu strValue: " << data.intValue << "\n";
    std::cout << "Odczytanie floatValue po przypisaniu strValue: " << data.floatValue << "\n";

    return 0;
}
