#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int c = 0;
    for(int temp = n;temp > 0;temp /= 10){
        c++;
    }
    int ten = 1;
    for(int i = 1;i<c;i++)ten *= 10;
    int num = n % ten;
    int count = 0;
    for(int temp = num;temp>0;temp /= 10){
        if(temp % 10 % 2 == 1){
            count++;
        }
    }
    printf("%d",count);
}