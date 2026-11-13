// Write a program to get a number from user and interchange the first and last digits and print the result.
#include <stdio.h>

void disp_interchange_first_last_digit(int n);

int main(){
    int n;
    scanf("%d",&n);
    disp_interchange_first_last_digit(n);
}

void disp_interchange_first_last_digit(int n){
    int place = 1;
    for(int temp = n;temp > 10;temp = temp / 10)place *= 10;
    int first = n / place;
    int last = n % 10;
    int middle = (n % place)/10;
    int result = last * place + middle*10 + first;
    printf("%d",result);
}
