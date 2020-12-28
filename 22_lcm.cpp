// prints 
// lowest common multiple

// this is the most easiest way available for beginners

#include<iostream>
int main(void){
    int a, b, gcd;
    std::cin>>a>>b;
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    std::cout<<(a*b)/gcd<<std::endl;
}

// there are another ways available :)