// Write a program get number from user print the total number of 
// single-digit prime numbers in the number.

#include <stdio.h>

int is_prime(int n){
    if(n<=1){
        return 0;
    }
    int i = 2;
    while(i<n){
        if(n%i==0){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int total = 0,temp = n;
    while(temp>0){
        int num = temp % 10;
        if(is_prime(num))total++;
        temp /= 10;
    }
    printf("%d",total);
}