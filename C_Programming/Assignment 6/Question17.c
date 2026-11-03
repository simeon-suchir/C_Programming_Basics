// Write a program to get a number from user, print whether that number is prime, 
// and sum of digit is equal to 14.

#include <stdio.h>

int is_prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int is_sum_digits_fourteen(int n){
    int temp = n,sum = 0;
    while(temp>0){
        sum += temp%10;
        temp /= 10;
    }
    return (sum==14)?1:0;
}
int main(){
    int n;
    scanf("%d",&n);
    if(is_prime(n) && is_sum_digits_fourteen(n)){
        printf("Prime and sum of digits is 14.");
    }
    else if(is_prime(n) && !is_sum_digits_fourteen(n)){
        printf("Prime and sum of digits is not 14.");
    }
    else if(!is_prime(n) && is_sum_digits_fourteen(n)){
        printf("Not Prime and sum of digits is 14.");
    }
    else{
        printf("Not Prime and sum of digits is not 14.");
    }
}