// if the square root of a number
// returns an integer 

#include<iostream>
#include<math.h>

int main(void){
    int num, iSqrt;
    float fSqrt;
    std::cin>>num;
    fSqrt = sqrt((double)num);
    iSqrt = fSqrt;
    if(fSqrt == iSqrt){
        std::cout << "Perfect Square" << std::endl;
    }
    else
    {
        std::cout << "Not Perfect Square" << std::endl;
    }
    
}