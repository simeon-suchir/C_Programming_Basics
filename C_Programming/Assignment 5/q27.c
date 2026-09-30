#include <stdio.h>

int main(){
    int c = 0;
    for(int n = 0;n < 100000;n++ ){
        int sum = 0;
        for(int temp = n;temp > 0;temp /= 10){
            sum+= temp%10;
        }
        if(sum == 14) c++;
    }
    printf("%d",c);
}