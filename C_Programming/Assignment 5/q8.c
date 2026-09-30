#include <stdio.h>

int main(){
    for(int i = 10 ;i < 100;i++){
        if((i/10%10)+(i%10)==6 && i%2==0){
            printf("%d\n",i);
        }
    }
}