#include<stdio.h>

float add(float a, float b){
    return a+b;
}

float subtract(float a, float b){
    return a-b;
}

float multiply(float a, float b){
    return a*b;
}

float divide(float a, float b){
    if (b==0){
        printf("Division by Zero not possible");
        return 0;
    }
    else{
        return a/b;
    }
    
    
    return a/b;
}

int main(){
    float num1, num2, result;
    int choice;
    float (*operations[4])(float, float) = {add, subtract, multiply, divide};
    while (1){
        printf("\n=== Calculator Menu ===\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice>=1 && choice <=4 ){
            printf("Enter two numbers: ");
            scanf ("%f %f", &num1, &num2);

            result = operations[choice-1](num1, num2);
            printf("Result = %.2f\n", result);

        }

        else if (choice == 5){
            break;
        }

        else{
            printf("Please enter a valid choice");
        }
        
    }
    

}