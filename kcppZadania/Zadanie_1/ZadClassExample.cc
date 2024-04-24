#include <iostream>

class Prostokat
{
private:
    float width;
    float height;

public:
    Prostokat();
    Prostokat(int a, int b);
    ~Prostokat();

    void setWidth(int value)
    {
        width = value;
    };
    void setHeight(int value)
    {
        height = value;
    };

    int getWidth()
    {
        return width;
    };
    int getHeight()
    {
        return height;
    };
};

Prostokat::Prostokat()
{
    std::cout << "Stworzono prostokąt" << std::endl;
    width = 1;
    height = 1;
}

Prostokat::Prostokat(int a, int b)
{
    std::cout << "Stworzono prostokąt z parametrami" << std::endl;
    width = a;
    height = b;
}

Prostokat::~Prostokat()
{
    std::cout << "Usunieto prostokąt" << std::endl;
}

int main()
{
    Prostokat *p1 = new Prostokat;
    std::cout << "Prostokat 1 bez parametrow: " << std::endl
              << "Szerokość: " << p1->getWidth() << std::endl
              << "Wysokosc: " << p1->getHeight() << std::endl;
    Prostokat *p2 = new Prostokat(2, 10);
    std::cout << "Prostokat 2 z parametrami: " << std::endl
              << "Szerokość: " << p2->getWidth() << std::endl
              << "Wysokosc: " << p2->getHeight() << std::endl;
    p2->setHeight(200);
    p2->setWidth(300);
    std::cout << "Prostokat po modyfikacji parametrów: " << std::endl
              << "Szerokość: " << p2->getWidth() << std::endl
              << "Wysokosc: " << p2->getHeight() << std::endl;

    delete p1;
    delete p2;
    return 0;
}