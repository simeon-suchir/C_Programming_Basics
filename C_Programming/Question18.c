// Write a program to get number from user, print whether that number’s 
// first two digits (ten’s digits and one’s digit) is prime.

#include <stdio.h>

int is_first_two_digits_prime(int n){
  for(int i=2; i< n%100;i++){
    if(n%100%i==0){
        return 0;
    }
  }
  return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    if(is_first_two_digits_prime(n)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}