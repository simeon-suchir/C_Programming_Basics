#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int temp = n;
    int c = 0;
    loop: if(temp>10){
        temp /= 10;
        c++;
        goto loop;
    }

    int ten = 1;
    int i = 0;
    loop1: if(i<c){
        ten = ten * 10;
        i++;
        goto loop1;
    }

    int first = n / ten;
    int mid = n % ten / 10;
    int last = n % 10;

    int div = 1;
    i = 0;
    loop2: if(i<c){
        div = div*10;
        i++;
        goto loop2;
    }
    
    printf("%d\n",last*div+mid*10+first);
}