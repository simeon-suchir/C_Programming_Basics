#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%10%2 == 0){
        printf("%d",n);
    }
    else{
        int c = 0;
        for(int temp = n;temp > 0;temp /= 10)c++;
        int ten = 1;
        for(int i = 0;i < c-1;i++) ten *= 10;
        int first = n / ten - 1;
        printf("%d",first*ten+n%ten);
    }
}