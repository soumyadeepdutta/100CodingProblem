// power of a number without using any 
// inbuilt library

#include<iostream>

int main(void){
    unsigned int result=1;
    int num, p;
    std::cin>>num>>p;
    for(int i=0; i<=p-1; i++){
        result *= num;
    }
    std::cout<<result<<std::endl;
}

// probably you have noticed this is the worst code
// try to optimise it :)