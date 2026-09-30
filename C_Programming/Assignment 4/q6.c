#include <stdio.h>

int main(){
    int n = 11;
    loop: if(n<20){
        if(n%2==1)
        printf("%d\n",n);
        n++;
        goto loop;
    }

}