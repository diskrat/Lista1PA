#include <stdio.h>
#include <stdlib.h>
void add(int x[],int y[],int z[], int n)
{
    for(int i = 0; i<n; i++)
    {
        z[i] = x[i] + y[i];
    }
}
int main()
{
    int n,i, *v1,*v2,*v3;
    printf("tamanho do vetor: ");
    scanf("%d", &n);
    printf("ok \n");
    v1 = malloc( n* sizeof(int));
    v2 = malloc( n* sizeof(int));
    v3 = malloc( n* sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("vetor1[%d]: ",i);
        scanf("%d", &v1[i]);
        printf("vetor2[%d]: ",i);
        scanf("%d", &v2[i]);
        printf("\n");
    }
    add(v1,v2,v3,n);
    for(i=0;i<n;i++)
    {
        printf("v3[%d]: %d \n",i,v3[i]);
    }
    free(v1);
    free(v2);
    free(v3);
    return 0;
}