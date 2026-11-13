// Write a program to get a number from user and print the sum of all digits.

#include <stdio.h>

void disp_sum_all_digits(int n);

int main(){
    int n;
    scanf("%d",&n);
    disp_sum_all_digits(n);
}

void disp_sum_all_digits(int n){
    int sum = 0;
    for(int temp = n;temp > 0;temp = temp / 10){
        sum += temp % 10;
    }
    printf("%d",sum);
}