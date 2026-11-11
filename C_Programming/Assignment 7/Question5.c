// Write a loop program to print odd number between 1 and 9.

#include <stdio.h>
void disp_odd();

int main(){
    disp_odd();
}

void disp_odd(){
    for(int i = 1; i < 10;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }
}