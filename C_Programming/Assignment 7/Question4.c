// Write a loop program to print sum of 6 to 1

#include <stdio.h>

void disp_rsum();

int main(){
    disp_rsum();
}

void disp_rsum(){
    int sum = 0;
    for(int i = 6;i>0;i--){
        sum+=i;
    }
    printf("%d",sum);
}