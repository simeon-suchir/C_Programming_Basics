#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("Reversed: %d",(n/10)+10*(n%10));
}