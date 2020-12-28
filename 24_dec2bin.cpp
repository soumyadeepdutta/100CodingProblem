// decimal => binary
#include<iostream>
int main(void){
    long bin=0;
    int dec, i=1;
    std::cin>>dec;
    while(dec){
        bin += dec%2*i;
        dec /= 2;
        i *= 10;
    }
    std::cout<<bin<<std::endl;
}
