## 1. Seja o seguinte trecho de programa:
```c
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;
```
Determine o valor das seguintes expressões:
```c++
//O conteúdo do ponteiro que aponta pra posicao de memoria de i é igual a posicao de memoria em i? 
p == &i; // true
// Dereferencia de p (i = 3) menos dereferencia de q (j = 5) 
*p - *q; // -2 (inteiro)
// Dereferencia da dereferencia da posicao de memoria de p
//&p: posicao de memoria de p, *&p: valor contido na posicao de memoria de p(&i), **&p: valor de i
**&p; //3 (inteiro)
3 - *p/(*q) + 7; //8 (inteiro)
```
