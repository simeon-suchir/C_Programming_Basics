
#include <stdio.h>

void disp_single_dig_square(int n);


int main(){
    int n;
    scanf("%d",&n);
    disp_single_dig_square(n);
}

void disp_single_dig_square(int n){
    int total = 0;
    for(int temp = n;temp > 0;temp /= 10){
        int num = temp % 10;
        for(int i = 1;i * i <= num;i++){
            if(i * i == num)total++;
        }
    }
    printf("%d",total);
}