// print the reverse of a number

#include<iostream>
int main(void){
    int num, reverse=0;
    std::cin>>num;
    while(num!=0){
        reverse = num%10 + (reverse*10);
        num = num/10;
    }
    std::cout<<reverse<<std::endl;
}
