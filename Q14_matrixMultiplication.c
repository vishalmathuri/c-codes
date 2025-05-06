#include<stdio.h>

int main(){
    int m1, n1, m2, n2;
    printf("Enter row and column for first matrix: ");
    scanf("%d %d", &m1, &n1);
    printf("Enter row and column for second matrix: ");
    scanf("%d %d", &m2, &n2);

    if (n1!=m2)
    {
        printf("Matrix multiplication is not possible");
    }
    
    int A[m1][n1], B[m2][n2], C[m1][n2];
    int i, j, k;

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m1; i++){
        for (j = 0; j < n1; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i=0; i<m2; i++){
        for(j=0; j<n2; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(i=0; i<m1; i++){
        for(j=0; j<n2; j++){
            C[i][j]=0;
        }
    }

    for (i = 0; i < m1; i++){
        for (j = 0; j < n2; j++){
            for (k = 0; k < n1; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result
    printf("Resultant matrix:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

}