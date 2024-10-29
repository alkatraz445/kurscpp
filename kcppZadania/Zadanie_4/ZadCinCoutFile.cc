// ZadCinCoutFile.cc
#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Wypisywanie na ekran
    std::cout << "Witaj! To jest przykład programu demonstracyjnego.\n";

    // Przykład zapisu do strumienia błędów
    std::cerr << "Uwaga: Wystąpił przykładowy błąd!\n";

    // Zapisywanie danych do pliku
    std::ofstream outFile("output.txt");
    if (!outFile) {
        std::cerr << "Błąd: Nie można otworzyć pliku do zapisu!\n";
        return 1;
    }
    outFile << "To jest przykład zapisu do pliku.\n";
    outFile << "Linia druga w pliku.\n";
    outFile.close();  // Zamykamy plik po zakończeniu zapisu
    std::cout << "Dane zapisano do pliku 'output.txt'.\n";

    // Odczytywanie danych z pliku
    std::ifstream inFile("output.txt");
    if (!inFile) {
        std::cerr << "Błąd: Nie można otworzyć pliku do odczytu!\n";
        return 1;
    }
    std::cout << "Zawartość pliku 'output.txt':\n";
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << '\n';  // Wypisujemy każdą linię z pliku na ekran
    }
    inFile.close();  // Zamykamy plik po zakończeniu odczytu

    return 0;
}
