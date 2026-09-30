#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int  c = 0;
    for(int temp = n;temp > 0;temp /= 10){
        int num = temp % 10;
        int perfect = 0;
        for(int i = 1;i<=num;i++){
            if(i*i == num){
                perfect = 1;
                break;
            }
        }
        if(perfect) c++;
    }
    printf("%d",c);
}