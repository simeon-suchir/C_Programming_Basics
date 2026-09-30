#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",n-(n/10%10%2)*5);
}