// Write a program print total number of single digit Prime numbers

#include <stdio.h>

void total_single_digit_prime();

int main(){
    total_single_digit_prime();
}
void total_single_digit_prime(){
    int total = 0;
    for(int i = 2;i < 10;i++){
        int prime = 1;
        for(int j = 2;j < i;j++){
            if(i % j == 0){
                prime = 0;
                break;
            }
        }
        if(prime) total++;
    }
    printf("%d",total);
}
