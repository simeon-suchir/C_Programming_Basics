#include <stdio.h>


void disp_sum_count14();

int main(){
    disp_sum_count14();
}

void disp_sum_count14(){
    int total = 0;
    for(int i = 100000;i > 0;i--){
        int sum = 0;
        for(int temp = i; temp > 0;temp /= 10){
            sum += temp % 10;
        }
        if(sum == 14)total++;
    }
    printf("%d",total);
}
