// Write a program get number from user print the total number digits which are odd in the number.

#include <stdio.h>

void disp_total_odd_digits(int n);

int main(){
    int n;
    scanf("%d",&n);
    disp_total_odd_digits(n);
}

void disp_total_odd_digits(int n){
    int total_odd = 0;
    for(int temp = n;temp > 0;temp /= 10){
        if(temp % 10 % 2 == 1)total_odd++;
    }
    printf("%d",total_odd);
}