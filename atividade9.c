#include<stdio.h>
#include<math.h>
main(){
    float salarioatual, percentualreajuste, novosalario;

    printf("Digite o salario atual");
    scanf("%f",&salarioatual);

    printf("Digite a porcentagem de reajuste",&percentualreajuste);
    scanf("%f",&percentualreajuste);

    novosalario = salarioatual + ((percentualreajuste/100)*salarioatual);

    printf("Novo salario: %f", novosalario);






}