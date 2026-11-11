// Write a loop program to print the two-digit odd numbers, below 20.

#include <stdio.h>

void disp_2dig_odd_below20();

int main(){
    disp_2dig_odd_below20();
}

void disp_2dig_odd_below20(){
    for(int i = 10;i < 20;i++){
        if(i%2==1)printf("%d\n",i);
    }
}