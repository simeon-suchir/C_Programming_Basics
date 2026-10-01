//Get a number and print the sum of all digits

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    int temp = n;
    while(temp>0){
        sum +=  temp%10;
        temp /= 10;
    }

    printf("The sum of the digits is: %d",sum);
}