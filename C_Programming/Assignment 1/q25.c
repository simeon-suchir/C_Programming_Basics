#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
loop:n = n/100 + n/10%10 + n%10;
    if(n>10){
        goto loop;
    }
    printf("%d",n);
}