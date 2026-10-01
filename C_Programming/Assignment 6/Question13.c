//Write a program to get a number from user and print reverse of that number

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int rev = 0;
    int temp = n;
    while(temp>0){
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    printf("The reversed number is: %d",rev);
}