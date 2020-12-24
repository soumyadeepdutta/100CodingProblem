// greatest amont three numbers
// using ternary operator

// using this approach you can compare as many
// variables you want

#include<iostream>
int main(void){
    int a, b, c;
    std::cin>>a>>b>>c;
    int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    std::cout<<max<<std::endl;
}