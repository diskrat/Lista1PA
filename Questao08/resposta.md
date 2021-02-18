## O que fazem os seguintes programas em C?
```c
int main()
{
    int vet[] = {4, 9, 13};
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d ", *(vet + i));
    }
}
```
> deferencia e mostra os valores contidos nos espacos de memoria conrrespondentes a itens do array ```vet[]```

```c
int main()
{
    int vet[] = {4, 9, 13};
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%X ",vet+i);
    }
}
```
> mostra a posicao de memria de cada item no array ```vet[]```