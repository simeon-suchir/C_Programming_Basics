#include <stdio.h>

int main(){
    for(int i = 10;i<100;i++){
        if((i/10%10)+(i%10)==7 && i%2==1){
            printf("%d\n",i);
        }
    }
}