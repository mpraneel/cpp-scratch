#include <iostream>
#define ENABLE_DEBUG // comment out to disable debugging

int add(int x, int y)
{
    #ifdef ENABLE_DEBUG
    std::cerr << "add() called (x=" << x <<", y=" << y << ")\n";
    #endif
	return x + y;
}

void printResult(int z)
{
	std::cout << "The answer is: " << z << '\n';
}

int getUserInput()
{
    #ifdef ENABLE_DEBUG
	std::cout << "Enter a number: ";
    #endif
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
	int x{ getUserInput() };
std::cerr << "main::x = " << x << '\n';
	int y{ getUserInput() };
std::cerr << "main::y = " << y << '\n';

	int z{ add(x, y) };
std::cerr << "main::z = " << z << '\n';
	printResult(z);

	return 0;
}