#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    // int Factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // if (num == 0 || num == 1)
    // {
    //     Factorial = 1;
    // }

    // else {
    //     for (int i = 1; i <= num; i++){
    //         Factorial = i * Factorial;
    //     }
    // }

    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else {
        //printf("Factorial is %d", Factorial);
        long long result = factorial(num);
        printf("Factorial of %d is %lld\n", num, result);
        
    }

    return 0;
}
