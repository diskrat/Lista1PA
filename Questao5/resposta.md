## 5. Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).

```c
int main(void)
{
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for (i = 0; i <= 4; i++)
    {
        printf("\ni = %d", i);
        printf("vet[%d] = %.1f", i, vet[i]);
        printf("*(f + %d) = %.1f", i, *(f + i));
        printf("&vet[%d] = %X", i, &vet[i]);
        printf("(f + %d) = %X", i, f + i);
    }
}
/*

*/
```
## Resposta 
- o programa mostra o valor de ```i```, o valor contido em ```vet[i]```, mostra o endereco de memoria de ```vet[i]``` e no final mostra novamente o endereco de memoria mas usando o ponteiro f como referencia.