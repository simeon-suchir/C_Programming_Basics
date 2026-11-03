//Write a program to get two numbers from user and print the HCF of those numbers.

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int hcf = (a<b)?a:b;
    while(!(a % hcf == 0 && b % hcf == 0)){
        hcf--;
    }
    printf("%d",hcf);
}