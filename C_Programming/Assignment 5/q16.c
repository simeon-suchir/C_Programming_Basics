#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int prime = 1;
    for(int i = 2;i <n;i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    int sum = 0;
    for(int temp = n;temp > 0;temp /= 10)sum+=temp%10;
    if(prime && sum==14){
        printf("Prime and sum of digits is 14.");
    }
    else if(!prime && sum == 14){
        printf("Not Prime and sum of digits is 14.");
    }
    else if(prime && !(sum==14)){
        printf("Prime and sum of digits is not 14.");
    }
    else{
        printf("Not Prime and sum of digits is not 14.");
    }
}