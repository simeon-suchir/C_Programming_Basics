//Write a program to get two numbers from user and print the LCM of those numbers.

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int lcm = (a>b)?a:b;
    while(!(lcm%a==0 && lcm%b==0)){
        lcm+=1;
    }
    printf("%d",lcm);
}