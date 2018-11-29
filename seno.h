#include <stdio.h>
#include <math.h>
void ssen (){
    float a=0,b;
    printf("digite o numero  [Em Radianos]   ");
    scanf("%f",&a);
    b=sin(a);
    printf("RESPOSTA:  %.4f",b);
}
void cosseno(){
    float a=0,b;
    printf("Digite o Numero [Em Radianos]   ");
    scanf("%f",&a);
    b=cos(a);
    printf("RESULTADO: %.4f",b);
}
void tangente(){
    float a=0,b;
    printf("Digite o Numero [Em Radianos]   ");
    scanf("%f",&a);
    b=tan(a);
    printf("RESULTADO: %.4f",b);
}
void cossecante(){
    float a=0,b;
    printf("Digite o Numero [Em Radianos]   ");
    scanf("%f",&a);
    b=1/sin(a);
    printf("RESULTADO: %.4f",b);
}

void secante(){
    float a=0,b;
    printf("Digite o Numero [Em Radianos]   ");
    scanf("%f",&a);
    b=1/cos(a);
    printf("RESULTADO: %.4f",b);
}

void cotangente(){
    float a=0,b;
    printf("Digite o Numero [Em Radianos]    3");
    scanf("%f",&a);
    b=1/tan(a);
    printf("RESULTADO: %.4f",b);
}

