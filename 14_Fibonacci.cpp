// print fibonacci series upto a given range
// read here - https://en.wikipedia.org/wiki/Fibonacci_number

#include<iostream>

void fibonacci(int range) 
{ 
    int start=0, next=1, temp=0;
    std::cout<<start<<" ";
    std::cout<<next<<" ";
    do
    {
        temp=start+next;
        std::cout<<temp<<" ";
        start = next;
        next = temp;
    } while (range > temp);
    
} 

int main(void){
    int num;
    std::cout<<"Enter a number greater than 2: ";
    std::cin>>num;
    fibonacci(num);
    std::cout<<std::endl;
}