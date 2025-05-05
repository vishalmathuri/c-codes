#include<stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int firstNumber, secondNumber;
    printf("Please enter both numbers:\n");
    scanf("%d %d", &firstNumber, &secondNumber);
    if (firstNumber <= 0 || secondNumber <= 0) {
        printf("Please enter two positive integers.\n");
        return 1;
    }
    printf("GCD of %d and %d is %d\n", firstNumber, secondNumber, gcd(firstNumber, secondNumber));
    return 0;
}

