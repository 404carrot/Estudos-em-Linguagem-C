#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Cálculo com Operações Aritméticas
/*
Situação problematizadora.
Uma empresa necessita de um programa que simule uma calculadora para poder ajudar o setor financeiro a realizar as operações triviais (soma, subtração, multiplicação e divisão).
É importante que a calculadora calcule e exiba o resultado de todas as quatro operações com os seus respectivos valores.
*/

    int n1, n2, soma, mult, sub, numero;
    float div;

    printf("digite um valor: \n");

    scanf("%d", &n1); 

    printf("digite um outro valor: \n");

    scanf("%d", &n2); 

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    printf("Resultado somando n1, n2: \n");
    printf("%d\n", soma);

    printf("Resultado subtraido n1, n2: \n");
    printf("%d\n", sub);

    printf("Resultado multiplicado n1, n2: \n");
    printf("%d\n", mult);

    printf("Resultado dividindo n1, n2: \n");
    printf("%f\n", div);

    return 0;
}
