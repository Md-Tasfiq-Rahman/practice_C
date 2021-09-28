#include <stdio.h>

void printDigits(int n){

    if(n==0)return;
    printDigits(n/10);
    printf("%d\n",n%10);
}

int sumDigits(int n){

    if(n==0)return 0;
    return n%10 + sumDigits(n/10);
}

void bin(int n){
    if(n<=1){
        printf("%d",n%2);
        return;
    }
    bin(n/2);
    printf("%d",n%2);
}

void binReverse(int n){
    if(n<=1){
        printf("%d",n%2);
        return;
    }
    printf("%d",n%2);
    bin(n/2);
}

int main(){
    printDigits(2345);
    printf("%d\n",sumDigits(2345));
    bin(6);
    printf("\n");
    binReverse(6);
}

