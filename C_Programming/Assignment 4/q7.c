#include <stdio.h>

int main(){
    int n = 11;
    loop: if(n<100){
        if((n/10%10)+(n%10)==7)
        printf("%d\n",n);
        n+=2;
        goto loop;
    }
}