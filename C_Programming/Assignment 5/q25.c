#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int c = 0;
    for(int temp = n;temp > 0;temp /= 10){
        int num = temp % 10;
        int prime = 1;
        if(num == 1) prime = 0;
        for(int i = 2;i < num;i++){
            if(num % i == 0){
                prime = 0;
                break;
            }
        }
        if(prime)c++;
    }
    printf("%d",c);
}