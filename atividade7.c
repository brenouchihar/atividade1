#include<stdio.h>
#include<math.h>
main(){

    double raio, areacirculo;
    double PI = 3.1415;

    printf("Digite o valrdo raio");
    scanf("%lf", &raio);

    areacirculo = PI * (raio * raio);
    areacirculo = PI * (pow(raio,2));

    printf("A area do circulo é; %lf",areacirculo);
   






}