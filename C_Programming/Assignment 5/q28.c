#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int max = 0;
    if(a>b) max = a;
    else max = b;
    int lcm = max;
    while(!(lcm % a == 0 && lcm % b ==0)){
        lcm += max;
    }
    printf("%d",lcm);
}