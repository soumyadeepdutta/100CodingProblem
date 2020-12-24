// sum of numbers in a given range (inclusive)
// complexity: O(n)

#include<iostream>
int main(void){
    int a, b;
    unsigned int sum=0;
    std::cin>>a>>b;
    for(int i=a; i<=b; i++){
        sum += i;
    }
    std::cout<<sum<<std::endl;
}