#include <iostream>

void foo()
{
    std::cout << "foo"
              << std::endl;
}

void bar()
{
    std::cout << "bar"
              << std::endl;
}

void foo(int a)
{
    std::cout << "foo z liczbą " << a
              << std::endl;
}

#ifdef __cplusplus
extern "C"
{

    void cfoo()
    {
        printf("Extern C foo\n");
    }
    void cbar()
    {
        printf("Extern C bar\n");
    }
}
#endif

int main()
{
    foo();
    bar();
    foo(23);
    cfoo();
    cbar();
    std::cout << "Witaj w świecie C++!"
              << std::endl;
    return 0;
}
