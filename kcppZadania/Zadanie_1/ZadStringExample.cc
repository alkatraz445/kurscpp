/*
c++23
 */

#include <iostream>
#include <string>

void printEmpty(std::string str)
{
    if (str.empty())
    {
        std::cout << "Ciąg znaków jest pusty" << std::endl;
    }
    else
    {
        std::cout << "Ciąg znaków NIE jest pusty" << std::endl;
    }
}

int main()
{
    std::string str = "Hello, World!";
    std::string emptyStr = "";
    // 1. empty()
    printEmpty(str);
    printEmpty(emptyStr);

    /* 2. size(),length()
     * size oraz length są równoznaczne
     */
    std::cout << "Rozmiar ciągu znaków: \"" << str
              << "\" to: " << str.size() << " ,a długośc to: "
              << str.length() << std::endl;

    // 3. at()
    std::cout << "Znak na pozycji 7 w ciągu znaków: \"" << str
              << "\" to: " << str.at(7) << std::endl;

    std::cout << "Znak na pozycji 7 w ciągu znaków: \"" << str
              << "\" to: " << str[7] << std::endl;

    // 4. clear()
    std::cout << "Ciąg znaków przed clear: " << str << std::endl;
    str.clear();
    std::cout << "Ciąg znaków po clear: " << str << std::endl;

    // 5. erase()
    std::string str2 = "Hello, World!";
    std::cout << "Ciąg znaków przed erase: " << str2 << std::endl;
    str2.erase(7, 6);
    std::cout << "Ciąg znaków po erase: " << str2 << std::endl;

    // 6. find()
    std::string str3 = "Hello, World!";
    std::cout << "Ciąg znaków: " << str3 << std::endl;
    std::cout << "Pozycja znalezionego ciągu znaków: " << str3.find("World") << std::endl;

    // 7. swap()
    std::string str4 = "Hello, C++!";
    std::cout << "Ciąg znaków przed swap: " << str3 << " " << str4 << std::endl;
    str3.swap(str4);
    std::cout << "Ciąg znaków po swap: " << str3 << " " << str4 << std::endl;

    // 8. substr()
    std::cout << "Podciąg ciągu znaków: " << str4 << " to: " << str4.substr(0, 5) << std::endl;

    // 9. append()
    std::string str5 = "Hello, ";
    std::string str6 = "there!";
    std::cout << "Ciąg znaków przed append: " << str5 << " " << str6 << std::endl;
    str5.append(str6);
    std::cout << "Ciąg znaków po append: " << str5 << std::endl;
    return 0;
}

/* Zadanie podczas zajęć
 *   Napisz funkcje (osobny program) w którym zadeklarujesz string i uzyjesz na nim funkcji manimulacyjnych:
 *  [x] 1. empty() 	Zwraca wartość true jeżeli napis jest pusty.
 *  [x] 2. size(),length() 	Zwraca ilość znaków w napisie.
 *  [x] 3. at() 	Zwraca znak o podanym położeniu, tak jak operator [], z tym że ta metoda jest bezpieczniejsza - wyrzuca wyjątek w przypadku wyjścia poza zakres stringa.
 *  [x] 4. clear() 	Usuwa wszystkie znaki z napisu.
 *  [x] 5. erase(...) 	Usuwa wybrane znaki.
 *  [x] 6. find(...) 	Znajduje podciąg w ciągu, są też bardziej rozbudowane funkcje tego typu.
 *  [x] 7. swap(...) 	Zamienia miejscami dwa stringi, a staje się b, a b staje się a.
 *  [x] 8. substr(...) 	Zwraca podciąg na podstawie indeksu początkowego i długości podciągu.
 *  [x] 9. append(...)
 */