// sum of all digits of a number

#include<iostream>
int main(void){
    int num, sum=0;
    std::cin>>num;
    while(num!=0){
        sum += num%10;
        num=num/10;
    }
    sum += num;
    std::cout<<sum<<std::endl;
}
