#include<stdio.h>
#include<cs50.h>

int main(void){
    char *s="HI!";

    printf("The address of first character is : %c\n", *s);
    printf("The address of second character is : %c\n", *(s+1));
    printf("The address of third character is : %c\n", *(s+2));

    // If you try to print like %c *(s+100000) it will bring the Segmentation fault.
    // This result from touching memory that you shouldn't have touched.

}