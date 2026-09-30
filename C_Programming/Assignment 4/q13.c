#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int temp = n;
    int res = 0;
    loop: if(temp>0){
        int rem = temp % 10;
        res = res*10 + rem;
        temp = temp / 10;
        goto loop;
    }
    printf("%d",res);
}