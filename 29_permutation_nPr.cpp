// nPr = n! / (n-r)!
// read here: https://www.mathsisfun.com/combinatorics/combinations-permutations.html

#include <iostream>

long factorial(long num)
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
    int n, r;
    std::cin >> n >> r;
    std::cout << factorial(n)/factorial(n-r) << std::endl;
}
