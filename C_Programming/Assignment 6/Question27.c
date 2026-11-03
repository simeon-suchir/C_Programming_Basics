// Write a program to print the total count of numbers which are 
// less than 100000 and whose sum of digits is 14.

#include <stdio.h>

int is_sum_digits_fourteen(int n){
    int sum = 0,temp = n;
    while(temp > 0){
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    if(sum == 14)
        return 1;
    else 
        return 0;
}

int main(){
    int total = 0;
    int i = 0;
    while(i<100000){
        if(is_sum_digits_fourteen(i))total++;
        i++;
    }
    printf("%d",total);
}