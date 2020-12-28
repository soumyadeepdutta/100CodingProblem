// octal => binary
// or
// octal => decimal => binary

#include<iostream>
#include<math.h>

int main(void){
    int oct, dec=0, i=0;
    long bin=0;
    std::cin>>oct;

    // octal => decimal
    while (oct!=0)
    {
        dec += oct%10 * pow(8,i);
        oct /= 10;
        i++;
    }

    // decimal => binary
    i=1;
    while(dec){
        bin += dec%2*i;
        dec /= 2;
        i *= 10;
    }
    std::cout<<bin<<std::endl;
}


// of course there are direct method available :)