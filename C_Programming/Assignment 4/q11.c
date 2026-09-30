#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int c = 0;
    loop: if(n>0){
        n = n/10;
        c++;
        goto loop;
    }
    printf("%d",c);
}