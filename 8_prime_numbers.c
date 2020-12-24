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
