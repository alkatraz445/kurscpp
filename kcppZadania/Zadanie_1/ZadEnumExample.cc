#include <iostream>

enum Months
{
    January = 1, // Pierwszy miesiąc ma wartość 1
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main()
{
    Months month;
    month = January;
    std::cout << "Month: " << month << std::endl;
    Months feb = February;
    std::cout << "Month: " << feb << std::endl;
    int wybrany_miesiac;
    std::cout << "Podaj numer miesiaca: ";
    std::cin >> wybrany_miesiac;
    switch (wybrany_miesiac)
    {
    case January:
        std::cout << "Styczeń ma 31 dni" << std::endl;
        break;
    case February:
        std::cout << "Luty ma (najczęściej) 28 dni" << std::endl;
        break;
    case March:
        std::cout << "Marzec ma 31 dni" << std::endl;
        break;
    case April:
        std::cout << "Kwiecień ma 30 dni" << std::endl;
        break;
    case May:
        std::cout << "Maj ma 31 dni" << std::endl;
        break;
    case June:
        std::cout << "Czerwiec ma 30 dni" << std::endl;
        break;
    case July:
        std::cout << "Lipiec ma 31 dni" << std::endl;
        break;
    case August:
        std::cout << "Sierpień ma 31 dni" << std::endl;
        break;
    case September:
        std::cout << "Wrzesień ma 30 dni" << std::endl;
        break;
    case October:
        std::cout << "Październik ma 31 dni" << std::endl;
        break;
    case November:
        std::cout << "Listopad ma 30 dni" << std::endl;
        break;
    case December:
        std::cout << "Grudzień ma 31 dni" << std::endl;
        break;
    default:
        std::cout << "Nie ma takiego miesiąca" << std::endl;
        break;
    }

    return 0;
}