#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",100*(n/100)+10*(n%10)+(n/10%10));
}