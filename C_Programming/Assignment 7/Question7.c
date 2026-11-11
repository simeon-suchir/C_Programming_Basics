// Write a loop program to print the two-digit odd numbers, who’s sum of digits are 7.

#include <stdio.h>

void disp_2dig_odd_sum7();

int main(){
    disp_2dig_odd_sum7();
}

void disp_2dig_odd_sum7(){
    for(int i = 10;i < 100;i++){
        if(i % 2 == 1 && ((i / 10 + i % 10) == 7)){
            printf("%d ",i);
        }
    }
}