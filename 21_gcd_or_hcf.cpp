// prints 
// greatest common divisible or,
// highest common factor

// this is the most easiest way available for beginners

#include<iostream>
int main(void){
    int a, b, gcd;
    std::cin>>a>>b;
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    std::cout<<gcd<<std::endl;
}

// there are multiple ways [optimised] available 
// to find gcd of two numbers
// try to solve in one of them after using this