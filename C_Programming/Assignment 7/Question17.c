// Write a program to get a number from user, 
// print whether that number is prime, and sum of digit is equal to 14.

#include <stdio.h>

void check_prime_and_sum14(int n);

int main(){
    int n;
    scanf("%d",&n);
    check_prime_and_sum14(n);
}

void check_prime_and_sum14(int n){
    int prime = 1;
    for(int i = 2;i < n;i++){
        if(n % i == 0){
            prime = 0;
            break;
        }
    }
    int sum  = 0;
    for(int temp = n;temp > 0;temp = temp / 10){
        sum += temp % 10;
    }
    if(prime && sum == 14){
        printf("Prime and sum of digits is 14");
    }
    else if(!prime && sum == 14){
        printf("Not Prime but sum of digits is 14");
    }
    else if(prime && sum != 14){
        printf("Prime and sum of digits is not 14");
    }
    else{
        printf("Not Prime and sum of digits is not 14");
    }
}

