#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int c =0;
    for(int temp = n;temp > 0;temp/=10)c++;
    printf("%d",c);
}