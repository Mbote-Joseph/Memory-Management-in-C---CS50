#include<stdio.h>

void swap(int *a, int *b){
    //  printf("The value of A is : %i \t The value of B is : %i\n",a,b);
    int tmp=*a;
    *a=*b;
    *b=tmp;
    // printf("The value of A is : %i \t The value of B is : %i\n",a,b);
}



int main(void){
    int x=10;
    int y=3;

    printf("The value of X is : %i \t The value of Y is : %i\n",x,y);

    swap(&x,&y);

    printf("The value of X is : %i \t The value of Y is : %i\n",x,y);
}