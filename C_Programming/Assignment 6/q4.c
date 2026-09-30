#include <stdio.h>

int main(){
    int i = 6;
    int sum = 0;
    while(i>0){
        sum += i;
        i--;
    }
    printf("%d",sum);
}