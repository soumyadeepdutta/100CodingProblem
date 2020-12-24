// print all prime numbers in a given range

#include<iostream>
int main(void){
    int a, b;
    std::cin>>a>>b;
    if(a>=2 && b>=2){
        for(int i=a; i<b; i++)
        {
            bool isPrime = true;
            for(int j=2; j*j<=i; j++){
                if(i%j==0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                std::cout<<i<<" ";
            }
        }
        std::cout<<std::endl;
    }
    else{
        std::cout<<"number below 2 are not accepted!!"<<std::endl;
    }
}