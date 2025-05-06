#include<stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex A, struct Complex B){
    struct Complex result;
    result.real=A.real+B.real;
    result.imag=A.imag+B.imag;
    return result;
};

struct Complex sub(struct Complex A, struct Complex B){
    struct Complex result;
    result.real=A.real-B.real;
    result.imag=A.imag-B.imag;
    return result;
    printf("diff", result);
};

struct Complex mul(struct Complex A, struct Complex B){
    struct Complex result;
    result.real=A.real*B.real-A.imag*B.imag;
    result.imag=A.imag*B.real+A.real*B.imag;
    return result;
};

void display(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

int main(){
    struct Complex num1, num2, sum, diff, prod;
    printf("Enter real and imaginary part of first number: ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter real and imaginary part of second number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    sum = add(num1, num2);
    diff = sub(num1, num2);
    prod = mul(num1, num2);
    // if (sum.imag>0){
    //     printf("Sum = %f +  %fi\n", sum.real, sum.imag);
    // } else {
    //     printf("Sum = %f -  %fi\n", sum.real, -sum.imag);
    // }

    // if (diff.imag>0){
    //     printf("Sub = %f +  %fi\n", diff.real, diff.imag);
    // } else {
    //     printf("Sub = %f +  %fi\n", diff.real, -diff.imag);
    // }
        
    printf("\nSum = ");
    display(sum);

    printf("Difference = ");
    display(diff);

    printf("Product = ");
    display(prod);

    return 0;

}