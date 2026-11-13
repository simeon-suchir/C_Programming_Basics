// Write a program to get number from user, print whether that number’s 
// first two digits (ten’s digits and one’s digit) is prime.


#include <stdio.h>

void check_first_2digits_prime(int n);

int main(){
    int n;
    scanf("%d",&n);
    check_first_2digits_prime(n);
}

void check_first_2digits_prime(int n){
    int num = n % 100;
    int prime = 1;
    for(int i = 2;i < num;i++){
        if(num % i == 0){
            prime = 0;
            break;
        }
    }
    if(prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}

