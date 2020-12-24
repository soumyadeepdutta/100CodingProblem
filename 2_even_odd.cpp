// check if a number is even or odd

#include<iostream>
int main(void){
    int num;
    std::cin>>num;
    if(num%2==0){
        std::cout<<"Even"<<std::endl;
    }
    else{
        std::cout<<"Odd"<<std::endl;
    }
}