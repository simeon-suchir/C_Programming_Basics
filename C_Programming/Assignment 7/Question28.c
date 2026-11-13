#include <stdio.h>

void LCM3(int a,int b,int c);

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    LCM3(a,b,c);
}

void LCM3(int a,int b,int c){
    int t = (a>b)?a:b;
    int lcm = (t>c)?t:c;
    while(!(lcm % a == 0 && lcm % b == 0 && lcm % c == 0)){
        lcm++;
    }
    printf("%d",lcm);
}
