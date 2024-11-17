#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }
    int p = 0;
    while (p < 5)
    {
        std::cout << "In " << p << std::endl;
        p++;
    }
    if (p == 5)
    {
        std::cout << "Done!" << std::endl;
        std::cout << "In " << p << std::endl;
    }
    return 0;
}