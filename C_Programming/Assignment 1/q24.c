#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",n-(n/100%2)*(n%10%2)*5);
}