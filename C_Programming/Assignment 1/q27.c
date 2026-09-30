#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",100*(n/1000)+1000*(n/100%10)+10*(n/10%10)+n%10);
}