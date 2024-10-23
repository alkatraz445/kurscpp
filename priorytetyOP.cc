#include <iostream>
int main()
{
    int x = 1;
    int y = 2;
    int z = 3;

    int result[] = {4, 4, 4, 4};

    result[0] *= -++x * x-- + -y-- % ++z;
    std::cout << "0. " << result[0] << std::endl;

    result[1] *= -(++x) * (x--) + -(y--) % (++z);
    std::cout << "1. " << result[1] << std::endl;

    result[2] *= (-(++x)) * (x--) + (-(y--)) % (++z);
    std::cout << "2. " << result[2] << std::endl;

    result[3] *= ((-(++x)) * (x--)) + ((-(y--)) % (++z));
    std::cout << "3. " << result[3] << std::endl;
    return 0;
}
