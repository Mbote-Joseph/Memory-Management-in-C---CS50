#include<stdio.h>
#include<cs50.h>

int main(void){
    int i= get_int("i: ");
    int j= get_int("j: ");

    if(i==j){
        printf("\tThey are Same.\n");
    }else{
        printf("\tThey are diffrent.\n");
    }
}