// /Write a loop program to print sum of 1 to 5

#include <stdio.h>

void disp_sum();

int main(){
    disp_sum();
}

void disp_sum(){
    int sum = 0;
    for(int i = 1;i <= 5;i++){
        sum+=i;
    }
    printf("%d",sum);
}