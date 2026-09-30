#include <stdio.h>

int main(){
    int n = 6;
    int sum = 0;
    loop: if(n>0){
        sum += n--;
        goto loop;
    }
    printf("%d",sum);
}