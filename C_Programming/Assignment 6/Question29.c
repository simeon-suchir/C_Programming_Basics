//Write a program to get three numbers from user and print the LCM of those numbers.

#include <stdio.h>

int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    int lcm = (((num1>num2)?num1:num2)>num3?((num1>num2)?num1:num2):num3);
    while(!(lcm % num1 == 0 && lcm % num2 == 0 && lcm % num3 == 0)){
        lcm+=1;
    }
    printf("%d",lcm);
}