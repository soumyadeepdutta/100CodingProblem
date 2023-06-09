// if number = the reverse of a number
// ex: 12321, 76567
// read here - https://en.wikipedia.org/wiki/Palindromic_number

/**
 * @file 12_palindrome.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/palindrome-number/description/
 * @version 0.1
 * @date 2023-06-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
using namespace std;

bool isPalindrom(int &num)
{
    int temp = num;
    int reversed = 0;
    while (temp != 0)
    {
        reversed = temp % 10 + (reversed * 10);
        temp = int(temp / 10);
    }
    cout << "rev " << reversed;
    return num == reversed;
}

int main(void)
{
    // int num, reverse = 0, temp;
    // std::cin >> num;
    // temp = num;
    // while (num != 0)
    // {
    //     reverse = num % 10 + (reverse * 10);
    //     num = num / 10;
    // }
    // if (temp == (reverse + num))
    // {
    //     std::cout << "Palindrome" << std::endl;
    //     return 0;
    // }
    // std::cout << "Not Palindrome" << std::endl;
    int num = 121;
    cout << isPalindrom(num);
    return 0;
}