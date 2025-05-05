#include<stdio.h>
int main(){
    int number, a, rim, rev=0;
    printf("Enter number ");
    scanf("%d", &number);
    a = number;
    while (a>0)
    {
        rim = a % 10;
        rev = rev * 10 + rim;
        a=a/10;
    }

    if (number==rev)
    {
        printf("%d is Palindrome Number",  number);
    }
    else{
        printf("%d is not Palindrome Number",  number);
    }
    

    return 0;
}