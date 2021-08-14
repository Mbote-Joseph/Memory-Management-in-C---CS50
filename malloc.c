#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    char *s=get_string("Enter the string : ");
    char *t= malloc(strlen(s+1));

/* =========== Checking that the memory is available to allocate t/ Absence of an address.===================== */
    if(t==NULL){
        return 1;
    }

    // strcpy(s,t);                 //Another method to copy
    
    for(int i=0, n=strlen(s);i<=n; i++){
        t[i]=s[i]; /* ====*(t+i)=*(s+i)========  */
    }

    if(strlen(s)>0){
        t[0]=toupper(t[0]); /*==== *t=toupper(*t)====== */
    }
    

    printf("S : %s\n",s);
    printf("T : %s\n",t);
    /* ================To print the addresses of strings S & T=========================== */
    printf("The memory address of S : %p\n",&s);
    printf("The memory address of T : %p\n",&t);

    /*
    Once you are done you need to free the allocated memory to prevent your computer running short of the memory.
    This is done by using :
    free(t);

    Note:
    -Amytime you use malloc you have to use free.
    */

    free(t);
}