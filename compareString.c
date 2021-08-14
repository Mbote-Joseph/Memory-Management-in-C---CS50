#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void){
    char *s=get_string("String s : ");
    char *t=get_string("String t : ");

    if(strcmp(s,t)==0){
        printf("\tThey are Same.\n");
    }else{
        printf("\tThey are diffrent.\n");
    }

/*================It is the same as the comparing the value of the pointer as implemented below. =================*/

    // if(*s==*t){
    //     printf("\tThey are Same.\n");
    // }else{
    //     printf("\tThey are diffrent.\n");
    // }
}