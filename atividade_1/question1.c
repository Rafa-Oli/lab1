/* 
3.17 Consumo de gasolina. Os motoristas se preocupam com o consumo de combustível de seus automóveis.
Um motorista manteve um registro do número de abastecimentos que fez, 
registrando também o número de quilômetros rodados e de litros obtidos a cada abastecimento. 
Desenvolva um programa que peça o número de quilômetros dirigidos e a quantidade de litros obtidos a cada 
abastecimento. O programa deverá calcular e exibira quantidade de quilômetros rodados por litros usados. 
Depois de processar toda a informação, o programa deverá calcular e exibir o total combinado de quilômetros 
por litro para todos os abastecimentos.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float km;
    float litros;
    float quantidadeKmPorLitros;

    printf("Informe o número de quilômetros dirigidos: \n");
    scanf("%f", &km);
    printf("\nInforme os litros obtidos a cada abastecimento: \n");
    scanf("%f", &litros);

    quantidadeKmPorLitros = km / litros;

    printf("O total de quilômetro rodados por litro é: %.2f", quantidadeKmPorLitros);

    return 0;
}