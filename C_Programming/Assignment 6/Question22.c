//Write a program get number from user print the total number of 
//two-digit odd numbers in the number.

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int count = 0, temp = n;
    while(temp > 10){
        int num = temp % 100;
        if(num % 2 == 1)count++;
        temp/=10;
    }
    printf("%d",count);
}