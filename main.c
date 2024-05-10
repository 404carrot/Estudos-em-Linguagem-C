#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1 = 10;
    float n2 = 2;
    double n3 = 2.5;
    char letra = 'a';
    char frase[10] = "tiago";

    int valor1, valor2, soma, mult, sub, numero;
    float div;
    /*
        printf("para numero inteiros %d\n", n1); //\n serve para pula uma linha
        printf("tipo float %f\n", n2);
        printf("tipo double tambem %f\n", n3);
        printf("tipo string %c\n", letra);
        printf("tipo string mais de uma letra %s\n", frase);
    */

    /*
    //OPERADORES ARITMETICOS

                printf("digite um valor: \n");

                scanf("%d", &valor1); //"e" comercial significa endereço

                printf("digite um outro valor: \n");

                scanf("%d", &valor2); // entra de dado pelo scanf

                soma = valor1 + valor2;
                sub = valor1 - valor2;
                mult = valor1 * valor2;
                div = valor1 / valor2;

                printf("Resultado somando n1, n2: \n");
                printf("%d\n", soma);

                printf("Resultado subtraido n1, n2: \n");
                printf("%d\n", sub);

                printf("Resultado multiplicado n1, n2: \n");
                printf("%d\n", mult);

                printf("Resultado dividindo n1, n2: \n");
                printf("%f\n", div);
    */

    printf("digite um numero para verificamos se e par ou impar: \n");

    scanf("%d", &numero);

    if((numero%2==0)){

        printf("numero par\n");
    }else{

        printf("numero impar\n");
    }

    




    return 0;
}
