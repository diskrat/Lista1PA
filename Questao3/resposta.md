## Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de atribuição são ilegais?
```c
p = i;// ilegal, q so pode receber endereco do inteiro, nao inteiro
q = &j;// legal, estah recebendo o endereco do inteiro
p = &*&i;// legal, o endereco de memorio da dereferencia do endereco de i (*&i) = i
i = (*&)j;// acima, sintaxe incorreta a precisa da variavel inteira para resolver
i = *&j;// legal, recebe o valor de j
i = *&*&j;//legal, tambem recebe o valor de j
q =*p; // ilegal, um ponteiro para inteiro  nao deve receber um inteiro
i = (*p)++ + *q; // legal, operacoes aritimeticas com valores inteiros
```