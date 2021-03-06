#include <stdio.h>
#include <stdlib.h>

void matrizMult(int **A,int **B,int **C,int NumLinA,int NumColA,int NumColB)
{
    int i,j,k;
    for(i=0;i<NumLinA;i++)
    {
        for(j=0;j<NumColB;j++)
        {
            C[i][j] = 0;
            for(k=0;k<NumColA;k++)
            {
                C[i][j] = C[i][j] + A[i][k]*B[k][j];
            }
        }
    }

    printf("Matriz A: \n");
    for(i=0;i<NumLinA;i++)
    {
        for(j=0;j<NumColA;j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz B: \n");
    for(i=0;i<NumColA;i++)
    {
        for(j=0;j<NumColB;j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz C: \n");
    for(i=0;i<NumColA;i++)
    {
        for(j=0;j<NumColA;j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int NumLinA, NumColA, NumColB, i, j;
    int **A, **B, **C;

    printf("Insira o numero de Linhas de A: ");
    scanf("%d",&NumLinA);
    printf("Insira o numero de colunas de A: ");
    scanf("%d",&NumColA);
    printf("Insira o numero de colunas de B: ");
    scanf("%d",&NumColB);


    A = malloc(NumLinA*sizeof(int*));
    A[0] = malloc(NumLinA*NumColA*sizeof(int));
    for(i=1; i < NumLinA;i++)
    {
        A[i] = A[i-1] + NumColA;
    }
    B = malloc(NumColA*sizeof(int*));
    B[0] = malloc(NumColA*NumColB*sizeof(int));
    for(i=1; i < NumColA;i++)
    {
        B[i] = B[i-1] + NumColB;
    }
    C = malloc(NumColA*sizeof(int*));
    C[0] = malloc(NumColA*NumColA*sizeof(int));
    for(i=1; i < NumColA;i++)
    {
        C[i] = C[i-1] + NumColA;
    }

    for(i= 0;i<NumLinA; i++)
    {
        for(j = 0; j<NumColA; j++)
        {
            printf("insira o valor de A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    for(i= 0;i<NumColA; i++)
    {
        for(j = 0; j<NumColB; j++)
        {
            printf("insira o valor de B[%d][%d]: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    matrizMult(A,B,C,NumLinA, NumColA, NumColB);
    
    
    free(A[0]);
    free(A);
    free(B[0]);
    free(B);
    free(C[0]);
    free(C);
    return 0;
}