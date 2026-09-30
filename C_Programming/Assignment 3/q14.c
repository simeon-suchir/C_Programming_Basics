#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    if((n/100)==(n%100)){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}