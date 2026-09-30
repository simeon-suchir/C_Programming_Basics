#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int hcf = 0;
    if(a == 0) hcf = b;
    if(b == 0) hcf = a;
    if(!a>b){
        int c = a;
        a = b;
        b = c;
    }
    while(!b==0){
        int t = a % b;
        a = b;
        b = t;
    }
    printf("%d",a);
}