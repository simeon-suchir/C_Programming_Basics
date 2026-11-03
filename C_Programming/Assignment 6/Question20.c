//Write a program print total number of single digit Prime numbers.

#include <stdio.h>

int main(){
    int n=0;
    int i=2;
    while(i<10){
        int prime=1;
        int j=2;
        while(j<i){
            if(i%j==0 ){    
                prime=0;               
                break;
            }
            j++;
        }
        if(prime){
            n++;
        }
        i++;
    }
    printf("%d",n);
}