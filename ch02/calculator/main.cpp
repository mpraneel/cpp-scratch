#include "calculator.h"

int main()
{
    int x = 4;
    int y = 5;

    int sum = add(x, y);
    int product = multiply(x, y);

    printResult("Sum: ", sum);
    printResult("Product: ", product);

    return 0;
}