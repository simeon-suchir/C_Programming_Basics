#include <stdio.h>

void lcm(int a,int b);

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    lcm(a,b);
}

void lcm(int a,int b){
    int lcm = (a>b)?a:b;
    while(!(lcm % a ==0 && lcm % b == 0)){
        lcm++;
    }
    printf("%d",lcm);
}