// Write a program to get a number from user and if the last digit of the number is even 
// print the same number. If the last digit of the number is odd, 
// then subtract 1 from the last digit and print the number. (Note: Last digit -MSB)

#include <stdio.h>

void check_last_digit_odd(int n);

int main(){
    int n;
    scanf("%d",&n);
    check_last_digit_odd(n);
}

void check_last_digit_odd(int n){
    if(n % 10 % 2 == 0){
        printf("%d",n);
    }
    else{
        int place = 1;
        for(int temp = n;temp > 10;temp /= 10)place *= 10;
        int first = (n / place) - 1;
        printf("%d",first * place + n % place);
    }
}
