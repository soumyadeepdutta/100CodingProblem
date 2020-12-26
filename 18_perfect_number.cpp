// a number is said to be perfect if the number = sum of all it's factors

#include <iostream>

int main(void)
{
    int num, sum = 0;
    std::cin >> num;

    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum + 1 == num)
    {
        std::cout << "Perfect" << std::endl;
    }
    else
    {
        std::cout << "Not Perfect" << std::endl;
    }
}