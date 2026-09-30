#include <stdio.h>

int main(){
    int n = 1;
    int sum = 0;
    loop: if(n<6){
        sum += n++;
        goto loop;
    }
    printf("%d",sum);

}