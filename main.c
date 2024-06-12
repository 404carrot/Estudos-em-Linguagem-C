#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*int n1 = 10;
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

    /*
        printf("digite um numero para verificamos se e par ou impar: \n");

        scanf("%d", &numero);

        if((numero%2==0)){

            printf("numero par\n");
        }else{

            printf("numero impar\n");
        }





        */

    // If else

    /*
        float media, nota1, nota2;

        printf("Digite sua primeira nota \n");
        scanf("%f", &nota1);

        printf("Digite sua segunda nota nota \n");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        printf("sua media e\n");
        printf("%f\n", media);

        if (media >= 7)
        {
            printf("Aprovado\n");
        }
        else if (media > 5)
        {

            printf("recuperaçao\n");
        }
        else
        {
            printf("reprovado\n");
        }
    */

    /*
        int dia;

        printf("Digite um dia da semana:\n");
            scanf("%d",&dia);

        switch (dia)
        {
        case 1:;
            printf("Domingo\n");
            break;
        case 2:;
            printf("Segunda\n");
            break;
        case 3:;
            printf("Terça\n");
            break;
        case 4:;
            printf("Quarta\n");
            break;
        case 5:;
            printf("Quinta\n");

            break;
        case 6:;
            printf("Sexta\n");
            break;
        case 7:;
            printf("Sabado\n");
            break;
        default:
            break;
        }



     int soma, result;
        for (int i = 0, j = -1;  i + j < 10; i + j)
        {
            soma = j+i;
            result = soma+i;
                printf("Hello World %d \n", i);
        }







    // código-fonte: fibonacci


    int fib(int n) {
      if (n == 1)
         return(0);

      if (n == 2)
         return(1);

      int i, F = 0, F1 = 0, F2 = 1;
      for(i=3; i<=n; i++) {
        F = F1 + F2;
        F1 = F2;
        F2 = F;
      }
      return(F);
    }

    int i;
      for(i=1; i<=10; i++) {
        printf("%2d: %d\n", i, fib(i));
      }




    int cont ;

    while (cont<=5)
    {

        printf("%d\n", cont);
        cont++;
    }



    int cont =6;

    do {

        printf("%d\n", cont);
        cont++;
    }while (cont<=5);


    int i;
    float vetor1 [4] ={1.2, 2.3, 3.4, 4.5};

    printf("%f\n", vetor1[0]);
    printf("%f\n", vetor1[1]);
    printf("%f\n", vetor1[2]);
    printf("%f\n", vetor1[3]);

    for ( i = 0; i < 4; i++)
    {
        printf("Vetor[%d] = %f\n", i, vetor1[i]);
    }




#define LINHAS 2 //CONSTATNTE
#define COLUNAS 2 //CONSTATNTE

   int vetor [LINHAS][COLUNAS], i, j;

for ( i = 0; i < LINHAS; i++)
{

    for ( j = 0; j < COLUNAS; j++)
{
    printf("Vetor[%d] [%d] = \n", i, j);

    scanf("%d", &vetor[i][j]);
}
}

 */
/*
    int multiplicar(int n1, int n2)
    {
        int res;

        res = n1 * n2;

        return res;
    }

    int v1, v2, resultado;

    printf("Digite um numero\n");
    scanf("%d", &v1);

    printf("Digite outro numero\n");
    scanf("%d", &v2);

    resultado = multiplicar(v1, v2);

    printf("%d", resultado);
*/




/*long fib(int n){

    if(n==1)
        return 0;
    else if (n ==2)
    {
        return 1;
    }else
        return fib(n - 1) + fib(n - 2);

}



    long n;
    printf("Digite um valor maior que zero: ");

    scanf("%d", &n);

    printf("O termo %d é %d\n", n , fib(n));




  unsigned long long fib(int n) {
      if (n == 1)
         return(0);

      if (n == 2)
         return(1);

      unsigned long long i, F = 0, F1 = 0, F2 = 1;
      for(i=3; i<=n; i++) {
        F = F1 + F2;
        F1 = F2;
        F2 = F;
      }
      return(F);
    }

    int i;
      for(i=10; i<=1000; i++) {
        printf("%s: %2d: %llu\n", "Termo", i, fib(i));
      }

*/


//OPERADORES ARITMETICOS

/*
     int valor1, valor2, soma, mult, sub, numero;
        float div;

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

/*

unsigned long long sequencia[1001];

sequencia[0] = 34;
sequencia[1] = 55;

for (int i = 2; i < 1001; i++) {
  sequencia[i] = sequencia[i - 1] + sequencia[i - 2];
}

printf("%d ", sequencia[0]);
for (int i = 1; i < 1001; i++) {
  printf("%llu ", sequencia[i]);
}

*/



#define LINHAS 3 //CONSTATNTE
#define COLUNAS 3 //CONSTATNTE

   int vetor [LINHAS][COLUNAS], i, j;

for ( i = 0; i < LINHAS; i++)
{

    for ( j = 0; j < COLUNAS; j++)
{
    printf("Linhas [%d] x 5 = %d Colunas [%d] x 5 = %d\n", i, i*5, j , j*5);

    //scanf("%d", &vetor[i][j]);
}
}



      return 0;



 
}
