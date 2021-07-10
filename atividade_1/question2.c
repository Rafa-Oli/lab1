/* 
4.18 Programa de exibição de gráfico de barras. Uma aplicação interessante dos computadores é a de desenhar 
gráficos e gráficos de barras (às vezes, chamados ‘histogramas’). Escreva um programa que leia cinco 
números(entre 1 e 30). Para cada número lido, seu programa deverá exibir uma linha contendo esse número 
de asteriscos adjacentes. Por exemplo, se seu programa ler o número sete, ele deverá exibir *******. 
*/

#include <stdlib.h>
#include <stdio.h>

const int NUM_MAX = 30;
const int NUM_MIN = 1;
const int TAM = 5;

int main()
{
    int vetor[TAM];
    int num;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o número %d: ", i);
        scanf("%d", &num);
        if (num < NUM_MAX && num > NUM_MIN)
        {
            vetor[i] = num;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < vetor[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}