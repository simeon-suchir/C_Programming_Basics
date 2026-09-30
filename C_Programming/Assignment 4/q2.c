#include <stdio.h>

int main(){
    int n = 5;
    loop: if(n>0){
        printf("%d\n",n);
        n--;
        goto loop;
    }
    
}