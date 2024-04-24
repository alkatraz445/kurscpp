#include <iostream>
#include <vector>

template <typename T>
T byValue(T x)
{
    return x;
}
int &byReference()
{
    static int x = 5;
    return x;
}

int *byPointer(int x)
{
    int *ptr = new int(x);
    return ptr;
}

std::vector<int> byArray(int n)
{
    std::vector<int> tablica;
    for (int i = n; i > 0; i--)
        tablica.push_back(i);
    return tablica;
}

int main()
{
    std::cout << byValue(10) << std::endl;
    std::cout << byReference() << std::endl;
    int *table = byPointer(12);
    for (int i = 0; i < 5; i++)
        std::cout << table[i] << " ";
    std::cout << std::endl;

    int x = 10;
    std::vector<int> table1 = byArray(x);
    for (int i = 0; i < x; i++)
        std::cout << table1[i] << " ";
    return 0;
}

/* Skorzystałem z:
 * https://www.digitalocean.com/community/tutorials/return-array-in-c-plus-plus-function
 * https://www.geeksforgeeks.org/templates-cpp/
 *
 *
 */