// check if a number is armstrong number
// https://en.wikipedia.org/wiki/Narcissistic_number

#include<iostream>
#include<math.h>

int main(void){
    int num, sum=0, temp;
    std::cin>>num;
    temp = num;
    while (num!=0)
    {
        sum += pow(num%10, 3);
        num /= 10;
    }
    if (sum == temp)
    {
        std::cout<<"Armstrong"<<std::endl;
    }
    else
    {
        std::cout<<"Not Armstrong"<<std::endl;
    }
}

// task for you is to create a program t o list all
// armstrong number in a given range
