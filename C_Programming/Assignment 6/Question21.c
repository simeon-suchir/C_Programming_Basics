//Write a program get number from user print the total
//number digits which are odd in the number.

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int total = 0,temp = n;
    while(temp>0){
        int digit = temp % 10;
        if(digit % 2 == 1) total++;
        temp/=10;
    }
    printf("%d",total);
}