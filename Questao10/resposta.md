## 10. Implemente um programa de computador para testar estas suposições e compare as respostas oferecidas pelo programa com as respostas que você idealizou.
```c
void main()
{
    for(int i=0; i< 4; i++)
    {
        printf("i = %d 1byte: %d 2bytes: %d 4bytes: %d 8bytes: %d \n" ,i,4092+i,4092+2*i,4092+4*i,4092+8*i);
    }
}
```
> cada linha do programa acima mostra a posicao de ```x + n``` usando os parametros dados pela questao, e os resultados concordam com o que foi respondido na questao 9.