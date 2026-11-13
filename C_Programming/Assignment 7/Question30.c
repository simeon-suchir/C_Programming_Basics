#include <stdio.h>

void hcf(int a,int b);

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    hcf(a,b);
}

void hcf(int a,int b){
    int hcf = (a<b)?a:b;
    while(!(a % hcf == 0 && b % hcf == 0)){
        hcf--;
    }
    printf("%d",hcf);
}