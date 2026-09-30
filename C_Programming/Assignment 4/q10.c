#include <stdio.h>

int main(){
    int n = 11;
    int sum = 0;
    loop: if(n<100){
        if((n/10%10)==7){
            sum+=n;
        }
        n+=2;
        goto loop;
    }
    printf("%d\n",sum);
}