## Suponha que as seguintes declarações tenham sido realizadas:

```c
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
```
- Identifique quais dos seguintes comandos é válido ou inválido:

```c
aloha[2] = value;  //valido, float recebe float
scanf("%f", &aloha);//invalido endereco recebe float
aloha = value;// invalido endereco recebe float
printf("%f", aloha);//valido mas retorna apenas o float 0
coisas[4][4] = aloha[3];//valido  float recebe float
coisas[5] = aloha;// invalido o endereco de da linha 5 do array coisas nao pode ser alterado
pf = value; // invalido um ponteiro para float nao pode receber um float
pf = aloha;// valido ponteiro para float recebendo  endereco para float
```