#include <stdio.h>

int main(){
    int n = 10;
    loop: if(n<100){
        if((n/10%10)+(n%10)==6)
        printf("%d\n",n);
        n+=2;
        goto loop;
    }

}