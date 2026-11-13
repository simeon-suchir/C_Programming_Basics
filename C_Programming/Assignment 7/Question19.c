// Write a program to get a 4-digit number from user, print whether that number’s 
// middle two digits (hundred’s digit and ten’s digit) is prime.

#include <stdio.h>

void middle_2digits_prime(int n);


int main(){
    int n;
    scanf("%d",&n);
    middle_2digits_prime(n);
}

void middle_2digits_prime(int n){
    int num = (n / 10) % 100;
    int prime = 1;
    for(int i = 2;i < num;i++){
        if(num % i == 0){
            prime = 0;
            break;
        }
    }
    if(prime) 
        printf("Prime");
    else 
        printf("Not Prime");
}