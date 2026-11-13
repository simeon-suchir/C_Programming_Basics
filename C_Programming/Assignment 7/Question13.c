// Write a program to get a number from user and print the reverse of that number.

#include <stdio.h>

void disp_reverse_number(int n);

int main(){
    int n;
    scanf("%d",&n);
    disp_reverse_number(n);
}

void disp_reverse_number(int n){
    int rev = 0;
    for(int temp = n; temp > 0;temp = temp / 10){
        rev = 10*rev + temp % 10;
    }
    printf("%d",rev);
}
