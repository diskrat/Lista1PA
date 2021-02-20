#include <stdio.h>
#include <stdlib.h>

void matrizMult(float **A,float **B,float **C,int NumLinA,int NumColA,int NumColB)
{
    int i,j,k;
    for(i=0;i<NumLinA;i++)
    {
        for(j=0;j<NumColB;j++)
        {
            C[i][j] = 0;
            for(k=0;k<NumColA;k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    printf("Matriz A: \n");
    for(i=0;i<NumLinA;i++)
    {
        for(j=0;j<NumColA;j++)
        {
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz B: \n");
    for(i=0;i<NumColA;i++)
    {
        for(j=0;j<NumColB;j++)
        {
            printf("%f ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz C: \n");
    for(i=0;i<NumColA;i++)
    {
        for(j=0;j<NumColA;j++)
        {
            printf("%f ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int NumLinA, NumColA, NumColB, i, j;
    float **A, **B, **C;

    printf("Insira o numero de Linhas de A: ");
    scanf("%d",&NumLinA);
    printf("Insira o numero de colunas de A: ");
    scanf("%d",&NumColA);
    printf("Insira o numero de colunas de B: ");
    scanf("%d",&NumColB);


    A = malloc(NumLinA*sizeof(float*));
    A[0] = malloc(NumLinA*NumColA*sizeof(float));
    for(i=1; i < NumLinA;i++)
    {
        A[i] = A[i-1] + NumColA;
    }
    B = malloc(NumColA*sizeof(float*));
    B[0] = malloc(NumColA*NumColB*sizeof(float));
    for(i=1; i < NumColA;i++)
    {
        B[i] = B[i-1] + NumColB;
    }
    C = malloc(NumColA*sizeof(float*));
    C[0] = malloc(NumColA*NumColA*sizeof(float));
    for(i=1; i < NumColA;i++)
    {
        C[i] = C[i-1] + NumColA;
    }

    for(i= 0;i<NumLinA; i++)
    {
        for(j = 0; j<NumColA; j++)
        {
            printf("insira o valor de A[%d][%d]: ",i,j);
            scanf("%f",&A[i][j]);
        }
    }
    printf("\n");
    for(i= 0;i<NumColA; i++)
    {
        for(j = 0; j<NumColB; j++)
        {
            printf("insira o valor de B[%d][%d]: ",i,j);
            scanf("%f",&B[i][j]);
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