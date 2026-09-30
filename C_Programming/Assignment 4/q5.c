#include <stdio.h>

int main(){
    int n = 1;
    loop: if(n<10){
        if(n%2==1){
            printf("%d\n",n);
        }
        n++;
        goto loop;
    }
}