// print factorial of a number
// factorial of 5 = 5*4*3*2*1 = 120

#include <iostream>

int factorial(int num)
{
    while (num != 0)
    {
        if (num <= 1)
            return num;
        else
            return num*factorial(num - 1);
    }
}

int main(void)
{
    int num;
    std::cin >> num;
    std::cout << factorial(num) << std::endl;
}
