#include<stdio.h>

int main(void){
    int n=50;
    printf("The integer is : %d\n",n);
    printf("The address of n is : %p\n", &n);
    printf("The integer n is : %d\n", *&n);
}