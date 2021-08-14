#include<stdio.h>
#include<cs50.h>

int main(void){
    string s="HI!";

    printf("The address of first character is : %p\n", &s[0]);
    printf("The address of second character is : %p\n", &s[1]);
    printf("The address of third character is : %p\n", &s[2]);

}