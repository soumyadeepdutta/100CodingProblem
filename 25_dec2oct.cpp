// decimal => octal

#include<iostream>
int main(void){
    int dec, oct=0, i=1;
    std::cin>>dec;
    while(dec){
        oct += dec%8*i;
        dec /= 8;
        i *= 10;
    }
    std::cout<<oct<<std::endl;
}
