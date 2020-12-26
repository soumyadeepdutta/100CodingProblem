#include<iostream>
int main(void){
    int num, count=0;
    std::cin>>num;
    while (num)
    {
        count++;
        num /= 10;
    }
    std::cout<<count<<std::endl;
}