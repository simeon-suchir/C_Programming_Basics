#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int num = 10*(n/10%10)+(n%10);
    int prime = 1;
    for(int i = 2;i < num;i++){
        if(num%i==0){
            prime = 0;
            break;
        }
    }
    if(prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}