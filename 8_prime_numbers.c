// this is not the effieiet way to check prime number
// this is a beginners program

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            printf("not prime \n");
            return 0;
        }
    }
    printf("prime \n");
    return 0;
}

// optimized C++ program

/*
#include<iostream>
int main(void){
    int num;
    if(num>=2){
        for(int i=2; i*i<=num; i++){
            if(num%i==0){
                std::cout<<"not prime"<<std::endl;
                return 0;
            }
        }
        std::cout<<"prime"<<std::endl;
        return 0;
    }
    else{
        std::cout<<"please enter a number greater than 1."
    }
}
*/
