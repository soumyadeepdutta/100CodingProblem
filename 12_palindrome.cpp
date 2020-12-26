// if number = the reverse of a number
// ex: 12321, 76567
// read here - https://en.wikipedia.org/wiki/Palindromic_number

#include <iostream>
int main(void)
{
    int num, reverse = 0, temp;
    std::cin >> num;
    temp = num;
    while (num != 0)
    {
        reverse = num % 10 + (reverse * 10);
        num = num / 10;
    }
    if (temp == (reverse + num))
    {
        std::cout << "Palindrome" << std::endl;
        return 0;
    }
    std::cout << "Not Palindrome" << std::endl;
}