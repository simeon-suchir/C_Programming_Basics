#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int prime = 1;
    int i = 2;

    loop:if(i<n){
        if(n%i==0){
            prime = 0;
            goto check;
        }
        i++;
        goto loop;
    }
    
    check: if(prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

}