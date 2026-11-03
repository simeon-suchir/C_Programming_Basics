// Write a program get number from user print the total number of two-digit 
// perfect square numbers in the number.
#include <stdio.h>

int is_perfect_square(int n){
    int i = 1;
    while(i*i <= n){
        if(i*i==n){
            return 1;
        }
        i++;
    }
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    int total = 0,temp = n;
    while(temp>10){
        int num = temp % 100;
        if(is_perfect_square(num))total++;
        temp /= 10;
    }
    printf("%d",total);
}