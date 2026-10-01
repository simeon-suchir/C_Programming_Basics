#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int digits = 0;
    while(n>0){
        n = n / 10;
        digits += 1;
    }
    printf("Number of digits: %d",digits);
}