#include <stdio.h>

int main(){
    int n = 1;
    loop:if(n<6){
        printf("%d\n",n);
        n++;
        goto loop;
    }
}