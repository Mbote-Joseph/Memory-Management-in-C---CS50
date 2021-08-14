#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int main(void){
    char *s=malloc(5);
    /*
   ========== valgrind ============
   valgrind is a tool that help us check whether unallocated memory is touched in order to avoid Segmentation fault.

    - It also checks whether the memory that was allocated earlier is freed.

   -You type in the terminal:
    - valgrind ./memory

    */
    s[0]='H';
    s[1]='i';
    s[2]='!';
    s[3]='\0';

    printf("%s\n", s);
    free(s);

}