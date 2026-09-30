#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%10%2==0){
        printf("%d",n);
    }
    else{
        int c = 0;
        int temp = n;
        loop1: if(temp > 0){
            c++;
            temp /= 10;
            goto loop1;
        }
        int ten = 1;
        int i = 0;
        loop2: if(i < c-1){
            ten = ten*10;
            i++;
            goto loop2;
        }
        int  first = n / ten - 1; 
        printf("%d",first*ten+n%ten);
    }
}