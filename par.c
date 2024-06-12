#include <stdio.h>
#include <stdlib.h>

/*
Situação problematizadora

Desenvolver um programa para que o usuário possa realizar a digitação de dois números (número inicial e número final). Dentro de uma estrutura de repetição será preciso verificar se o número que está sendo alimentado é um número par ou ímpar. A checagem do número deverá ser feita em uma função a ser criada. A função é quem deverá verificar a informação recebida e retornar o status se é par ou ímpar. Dentro da estrutura de repetição será preciso exibir uma mensagem com o valor do número e mais uma frase dizendo se ele é par ou ímpar. Após o término da estrutura de repetição será preciso informar a quantidade total de números pares encontrados.

*/

int main(void)

{
  int n1, n2, contador = 0;

  printf("digite o numero inicial: \n");

  scanf("%d", &n1);

  printf("digite o numero final \n");

  scanf("%d", &n2);

  if (n1 > n2)
  {

    printf("***ERRO!*** O numero inicial [%d] e maior que o numero final [%d]\n", n1, n2);
  }

  for (int i = n1; n1 <= n2; n1++)
  {
    //   printf("%d\n", n1 );

    if (n1 % 2 == 0)
    {

      printf("%d, O numero e Par\n", n1);

      contador++;
    }
    if (n1 % 2 > 0)
    {

      printf("%d, O numero, Impar\n", n1);
    }
  }
  printf("Foram %d numeros Par\n", contador);

  return 0;
}
