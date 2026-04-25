#include <iostream>
#include "calculator.h"
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

void printResult(const char* label, int value)
{
    cout << label << value << '\n';
}