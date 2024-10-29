#include <iostream>
#include <cmath>

using namespace std;

// Klasa abstrakcyjna
class Figura {
public:
    virtual double Obwod() = 0; // Metoda do obliczania obwodu
    virtual double Pole() = 0;   // Metoda do obliczania pola
    virtual void Narysuj() = 0;  // Metoda do rysowania
};

// Klasa Kwadrat
class Kwadrat : public Figura {
private:
    double bok;

public:
    Kwadrat(double b) : bok(b) {}

    double Obwod() {
        return 4 * bok;
    }

    double Pole() {
        return bok * bok;
    }

    void Narysuj() {
        cout << "Przepis na narysowanie kwadrata" << endl;
    }
};

// Klasa Prostokat
class Prostokat : public Figura {
private:
    double dlugosc, szerokosc;

public:
    Prostokat(double d, double s) : dlugosc(d), szerokosc(s) {}

    double Obwod() {
        return 2 * (dlugosc + szerokosc);
    }

    double Pole() {
        return dlugosc * szerokosc;
    }

    void Narysuj() {
        cout << "Przepis na narysowanie prostokata" << endl;
    }
};

// Klasa Trojkat
class Trojkat : public Figura {
private:
    double a, h; // a - podstawa, h - wysokość

public:
    Trojkat(double base, double height) : a(base), h(height) {}

    double Obwod() {
        // Zakładamy, że mamy trójkąt równoboczny dla uproszczenia
        return 3 * a;
    }

    double Pole() {
        return (a * h) / 2;
    }

    void Narysuj() {
        cout << "Przepis na narysowanie trojkata" << endl;
    }
};

// Klasa Koło
class Kolo : public Figura {
private:
    double promien;

public:
    Kolo(double r) : promien(r) {}

    double Obwod() {
        return 2 * M_PI * promien;
    }

    double Pole() {
        return M_PI * promien * promien;
    }

    void Narysuj() {
        cout << "Przepis na narysowanie kola" << endl;
    }

    // Metoda do obliczania dystansu
    double Dystans(double metryNaOsobe) {
        double powierzchnia = Pole();
        double liczbaOsob = powierzchnia / metryNaOsobe;
        return sqrt(powierzchnia / liczbaOsob); // Obliczamy promień dla odległości
    }
};

int main() {
    Figura* figury[4];

    // Tworzenie obiektów różnych figur
    figury[0] = new Kwadrat(5);
    figury[1] = new Prostokat(4, 6);
    figury[2] = new Trojkat(4, 3);
    figury[3] = new Kolo(3);

    // Obliczanie obwodu, pola i rysowanie figur
    for (int i = 0; i < 4; i++) {
        figury[i]->Narysuj();
        cout << "Obwód: " << figury[i]->Obwod() << endl;
        cout << "Pole: " << figury[i]->Pole() << endl;

        // Sprawdzamy, czy figura to Koło, aby obliczyć dystans
        Kolo* kolo = dynamic_cast<Kolo*>(figury[i]);
        if (kolo) {
            double metryNaOsobe;
            cout << "Podaj metry kwadratowe na osobę: ";
            cin >> metryNaOsobe;
            cout << "Dystans do następnej osoby: " << kolo->Dystans(metryNaOsobe) << " metrów" << endl;
        }
        cout << endl;
    }

    // Zwolnienie pamięci
    for (int i = 0; i < 4; i++) {
        delete figury[i];
    }

    return 0;
}
