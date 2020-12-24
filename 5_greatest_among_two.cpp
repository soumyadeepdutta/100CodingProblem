// greatest amont two numbers
//using ternary operator

#include<iostream>
int main(void){
    int a, b;
    std::cin>>a>>b;
    int max = a > b ? a : b;
    std::cout<<max<<std::endl;
}