#include<stdio.h>

int main(void){
    int scores[3];

    /*
    -Since the computer can't initialize values for you the computer will just print garbage values for you.
    */
    for(int i=0; i<3; i++){
        printf("%i\n",scores[i]);
    }
}