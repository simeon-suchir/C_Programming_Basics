// Write a loop program to print the two-digit even numbers, who’s sum of digits are 6.

#include <stdio.h>

void disp_2dig_even_sum6();

int main(){
    disp_2dig_even_sum6();
}

void disp_2dig_even_sum6(){
    for(int i = 10;i < 100;i++){
        if(i % 2 == 0 && (i / 10 + i % 10 == 6)){
            printf("%d ",i);
        }
    }
}