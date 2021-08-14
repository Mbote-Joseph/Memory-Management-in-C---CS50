#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

int main(void){
    char *s=get_string("Enter the string : ");
    char *t=s;

    t[0]=toupper(t[0]);

    printf("S :%s \n", s);
    printf("T : %s \n", t);
}