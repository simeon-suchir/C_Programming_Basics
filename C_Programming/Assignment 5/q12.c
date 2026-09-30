#include <stdio.h>

int main(){
    int sum = 0;
    int n;
    scanf("%d",&n);
    for(int temp = n;temp > 0;temp /=10){
        sum += temp % 10;
    }
    printf("%d",sum);
}