#include <iostream>

int main()
{
    int age {};

    std::cout << "Enter your age: ";
    std::cin >> age;

    bool isAdult { age >= 18 };

    if (isAdult)
    {
        std::cout << "You are an adult.\n";
    }
    else
    {
        std::cout << "You are not an adult.\n";
    }

    return 0;
}