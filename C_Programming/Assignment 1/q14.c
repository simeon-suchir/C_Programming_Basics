#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("Reversed : %d",100*(n%10)+10*(n/10%10)+(n/100));
}