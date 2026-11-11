// Write a loop program to print 1 to 5 on one by one.

#include <stdio.h>

void print_one_to_five();
int main(){
    print_one_to_five();
}

void print_one_to_five(){
    for(int i = 1; i <= 5;i++){
        printf("%d\n",i);
    }
}