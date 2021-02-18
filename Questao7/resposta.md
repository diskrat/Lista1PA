## 7. Considerando a declaração ```int mat[4], *p, x;```, quais das seguintes expressões são válidas? Justifique.
```c
p = mat + 1;
p = mat++;
p = ++mat;
x = (*mat)++;
```
> a expressao 1 eh valida pois p recebe o endereco de memoria do segundo item de mat

> a expressao 2 eh invalida pois nao eh possivel modificar o endereco de um array

> a expressao 3 tambem eh invalida pois nao eh possivle modificar o endereco de um array

> a expressao 4 eh valida pois x esta recebendo o valor contido em  ```mat[0]``` e incrementando ao final