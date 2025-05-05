#include<stdio.h>
int main(){
    int k =4, n=10;
    k = (k % n + n) % n;
    printf("Value of k %d", k);
    return 0;
}