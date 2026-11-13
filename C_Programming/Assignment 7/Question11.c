// Write a program to get a number from user print the total number of digits in that number

#include <stdio.h>

void count_total_digits(int n);

int main(){
    int n;
    scanf("%d",&n);
    count_total_digits(n);
}

void count_total_digits(int n){
    int total = 0;
    for(int temp = n;temp > 0;temp = temp/10){
        total++;
    }
    printf("%d",total);
}