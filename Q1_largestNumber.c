#include<stdio.h>
int main(){
    int firstNumber, secondNumber, thirdNumber, LargestNumber;
    // printf("First Number");
    // scanf("%d", &firstNumber);
    // printf("Second Number");
    // scanf("%d", &secondNumber);
    // printf("Third Number");
    // scanf("%d", &thirdNumber);

    printf("Please enter three numbers:\n");
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    if (firstNumber<=secondNumber)
    {
        LargestNumber=secondNumber;
    } else{
        LargestNumber=firstNumber;
    }
    
    if (LargestNumber>= thirdNumber)
    {
        printf("Largest Number %d", LargestNumber);
    } else{
        printf("Largest Number %d", thirdNumber);
    }
    return 0;
}