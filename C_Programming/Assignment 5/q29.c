#include <stdio.h>

int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int max1 = 0;
    if(a > b) max1 = a;
    else max1 = b;
    int lcm1 = max1;

    while(!(lcm1 % a == 0 && lcm1 % b == 0)){
        lcm1 += max1;
    }

    int max = 0;
    if(lcm1 > c) max = lcm1;
    else max = c;
    int lcm = max;

    while(!(lcm % lcm1 == 0 && lcm % c == 0)){
        lcm += max;
    }
    
    printf("%d",lcm);
}