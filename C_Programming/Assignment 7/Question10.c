// Write a loop program to print the sum of two-digit odd numbers, whose ten’s digit is 7.

#include <stdio.h>

void disp_2digit_odd_sum_tens7();

int main(){
    disp_2digit_odd_sum_tens7();
}

void disp_2digit_odd_sum_tens7(){
    int sum = 0;
    for(int i = 10;i < 100;i++){
        if(i % 2 == 1 && i / 10 == 7){
            sum += i;
        }
    }
    printf("%d",sum);
}