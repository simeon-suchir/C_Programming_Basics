// Write a program to get a 4-digit number from user, 
// print whether that number’s middle two digits 
// (hundred’s digit and ten’s digit) is prime.

#include <stdio.h>

int is_prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int num = (n%1000)/10;
    if(is_prime(num)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

}