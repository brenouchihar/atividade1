#include<stdio.h>
#include<math.h>
main(){

    float custo, frete, despesas, valorvendas, valorbruto, lucro, porcentagemlucro;

    printf("Digite o custo do produto");
    scanf("%f", &custo);
    printf("Digite o frete do produto");
    scanf("%f",&frete);
    printf("Digite a despesa");
    scanf("%f",&despesas);

    valorbruto = custo + frete + despesas;

    printf("O valor de custo do produto é: R$%f. Digite o valor da venda:", valorbruto);
    scanf("%d", &valorvendas);

    lucro = valorvendas - valorbruto;

    porcentagemlucro = (lucro/valorbruto)*100;

    printf("porcentagem do lucro: %f%%", porcentagemlucro);





}