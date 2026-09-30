#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int p = 10*(n/1000)+(n/100%10);
    int q = 10*(n/10%10)+n%10;
    if(p==q){
        printf("1");
    }
    else{
        printf("0");
    }
   
}