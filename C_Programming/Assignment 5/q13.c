#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int res = 0;
    for(int temp = n;temp > 0;temp /= 10){
        res = 10*res + (temp%10);
    }
    printf("%d",res);
}