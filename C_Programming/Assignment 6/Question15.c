//Write a program to get a number from user and if the last digit of the number 
//is even print the same number.
//If the last digit of the number is odd, then subtract 1 from the last digit and 
//print the number. (Note: Last digit -MSB).

#include <stdio.h>

int ten_power(int d){
    int ten = 1;
    int i =1; 
    while(i<d){
        ten = ten*10;
        i++;
    }
    return ten;
}
int main(){
    int n;
    scanf("%d",&n);
    int last_digit = n%10;
    if(last_digit%2==1){
        int temp = n, d = 0;
        while(temp>0){
            temp /= 10;
            d++;
        }
        printf("%d",n-ten_power(d));
    }
    else{
        printf("%d",n);
    }
}