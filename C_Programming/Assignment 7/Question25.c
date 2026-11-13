#include <stdio.h>


void disp_big_4digit_div7_9();

int main(){
    disp_big_4digit_div7_9();
}


void disp_big_4digit_div7_9(){
    for(int i = 9999;i > 1000;i--){
        if(i % 7 == 0 && i % 9 == 0){
            printf("%d",i);
            break;
        }
    }
}