// check if a number is strong
// factorial of 5 = 5! = 5*4*3*2*1 = 120
// strong number : 145 = 1! + 4! + 5!


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
    int num, temp, sum=0;
    std::cin >> num;
    temp = num;
    while (num)
    {
        sum += factorial(num%10);
        num /= 10;
    }
    if(sum == temp){
        std::cout<<"Strong"<<std::endl;
    }
    else
    {
         std::cout<<"Not Strong"<<std::endl;
    }
    
}
