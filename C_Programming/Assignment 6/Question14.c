//Get number and interchange ther first and last digits and print the result
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int last_digit = n % 10;
    int temp = n / 10;
    int mid_digits = 0;
    int d = 10;
    while(temp>10){
        temp /= 10;
        d*=10;
    }
    int first_digit = temp;
    int mid = (n % d)/10;
    printf("%d",last_digit*d+mid*10+first_digit);
}