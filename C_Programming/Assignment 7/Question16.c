// Write a program get number from user print whether that number is prime or not.

#include <stdio.h>

void check_prime(int n);

int main(){
    int n;
    scanf("%d",&n);
    check_prime(n);
}

void check_prime(int n){
    int prime = 1;
    for(int i = 2; i < n;i++){
        if(n % i == 0){
            prime = 0;
        }
    }
    if(prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}
