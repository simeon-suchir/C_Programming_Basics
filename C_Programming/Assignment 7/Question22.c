// Write a program get number from user print the total number of two-digit odd numbers in the number.

#include <stdio.h>

void disp_total_2digit_odd(int n);

int main(){
    int n;
    scanf("%d",&n);
    disp_total_2digit_odd(n);
}

void disp_total_2digit_odd(int n){
    int total = 0;
    for(int temp = n; temp > 10;temp /= 10){
        if(temp % 100 % 2 == 1)total++;
    }
    printf("%d",total);
}