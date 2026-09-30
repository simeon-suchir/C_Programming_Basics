#include <stdio.h>

int main(){

    int n,c=0;
    scanf("%d",&n);
    for(int temp = n;temp > 10;temp /= 10)c++;
    int ten = 1;
    for(int i = 0;i<c;i++)ten *= 10;
    int first = n / ten;
    int mid = n % ten / 10;
    int last = n % 10;
    int div = 1;
    for(int i = 0;i<c;i++)div *= 10;
    printf("%d",last*div+10*mid+first);
}