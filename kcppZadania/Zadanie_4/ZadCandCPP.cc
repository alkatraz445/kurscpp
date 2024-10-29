// ZadCandCPP.cc
#include <iostream>
#include <fstream>
#include <cstdio>  // Biblioteka standardowa C

int main() {
    // Część C++
    std::cout << "C++: Wypisanie tekstu na ekranie\n";

    // Zapis do pliku w C++
    std::ofstream outFileCPP("output_cpp.txt");
    if (outFileCPP) {
        outFileCPP << "C++: To jest tekst zapisany do pliku output_cpp.txt\n";
        outFileCPP << "C++: Kolejna linia tekstu.\n";
        outFileCPP.close();
    } else {
        std::cerr << "C++: Błąd przy otwieraniu pliku do zapisu.\n";
    }

    // Odczyt z pliku w C++
    std::ifstream inFileCPP("output_cpp.txt");
    if (inFileCPP) {
        std::cout << "C++: Zawartość pliku output_cpp.txt:\n";
        std::string line;
        while (std::getline(inFileCPP, line)) {
            std::cout << line << '\n';
        }
        inFileCPP.close();
    } else {
        std::cerr << "C++: Błąd przy otwieraniu pliku do odczytu.\n";
    }

    std::cout << "\n-----------------------------------\n\n";

    // Część C
    printf("C: Wypisanie tekstu na ekranie\n");

    // Zapis do pliku w C
    FILE *outFileC = fopen("output_c.txt", "w");
    if (outFileC) {
        fprintf(outFileC, "C: To jest tekst zapisany do pliku output_c.txt\n");
        fprintf(outFileC, "C: Kolejna linia tekstu.\n");
        fclose(outFileC);
    } else {
        fprintf(stderr, "C: Błąd przy otwieraniu pliku do zapisu.\n");
    }

    // Odczyt z pliku w C
    FILE *inFileC = fopen("output_c.txt", "r");
    if (inFileC) {
        char buffer[256];
        printf("C: Zawartość pliku output_c.txt:\n");
        while (fgets(buffer, sizeof(buffer), inFileC)) {
            printf("%s", buffer);
        }
        fclose(inFileC);
    } else {
        fprintf(stderr, "C: Błąd przy otwieraniu pliku do odczytu.\n");
    }

    return 0;
}
