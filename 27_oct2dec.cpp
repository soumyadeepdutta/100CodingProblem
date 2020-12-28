// octal => decimal

#include<iostream>
#include<math.h>

int main(void){
    int dec=0, oct, i=0;
    std::cin>>oct;
    while (oct!=0)
    {
        dec += oct%10 * pow(8,i);
        oct /= 10;
        i++;
    }
    std::cout<<dec<<std::endl;
}


// of course there are direct method available :)