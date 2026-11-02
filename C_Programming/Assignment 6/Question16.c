// Write a program get number from user print whether that number is prime or not.
#include <stdio.h>

int is_prime(int n){
    int prime = 1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime = 0;
            return prime;
        }
    }
    return prime;
}

int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("%d neither prime nor composite",n);
    }
    else{
        if(is_prime(n)){
            printf("%d : Prime",n);
        }
        else{
            printf("%d is not Prime.",n);
        }
    }

}