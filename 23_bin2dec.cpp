// convert binary => decimal
// take a look @ problem 20

#include<iostream>
#include<math.h>

int main(void){
    long bin;
    int dec=0, i=0;
    std::cin>>bin;
    while (bin!=0)
    {
        dec += bin%10 * pow(2,i);
        bin /= 10;
        i++;
    }
    std::cout<<dec<<std::endl;
}