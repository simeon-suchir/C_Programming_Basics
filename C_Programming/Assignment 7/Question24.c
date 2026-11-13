
#include <stdio.h>

void disp_two_digit_square(int n);

int main(){
    int n;
    scanf("%d",&n);
    disp_two_digit_square(n);
}

void disp_two_digit_square(int n){
    int total = 0;
    for(int temp = n;temp > 10;temp /= 10){
        int num = temp % 100;
        for(int i = 1;i * i <= num;i++){
            if(i * i == num) total++;
        }
    }
    printf("%d",total);
}