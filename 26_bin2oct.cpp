// binary => octal
// or
// binary => decimal => octal

#include<iostream>
#include<math.h>
int main(void){
    long bin;
    int dec=0, oct=0, i=0;
    std::cin>>bin;

    // converting binary => decimal
    while (bin!=0)
    {
        dec += bin%10 * pow(2,i);
        bin /= 10;
        i++;
    }


    // converting decimal => octal
    i=1;
    while(dec){
        oct += dec%8*i;
        dec /= 8;
        i *= 10;
    }
    std::cout<<oct<<std::endl;
}

// of course there are direct method available :)