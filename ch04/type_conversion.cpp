#include <iostream>

int main()
{
    int totalPoints { 17 };
    int numAssignments { 5 };

    double average { static_cast<double>(totalPoints) / numAssignments };

    std::cout << "Average: " << average << '\n';

    double decimalValue { 9.8 };
    int truncatedValue { static_cast<int>(decimalValue) };

    std::cout << "Original double: " << decimalValue << '\n';
    std::cout << "After static_cast<int>: " << truncatedValue << '\n';

    return 0;
}