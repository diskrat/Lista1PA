## Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de atribuição são ilegais?
```c
p = z`i;// ilegal, q so pode receber endereco do inteiro, nao inteiro
q = &j;// legal, estah recebendo o endereco do inteiro
p = &*&i;
i = (*&)j;
i = *&j;
i= *&*&j;
q=*p;
i=(*p)++ + *q;
```