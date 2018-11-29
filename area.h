#include <stdio.h>
void per_quadrado(){
    float a;
    printf("Digite o valor do lado do quadrado  ");
    scanf("%f",&a);
    printf("RESULTADO: %.2f",a*4);
    getche();
}
void area_quadrado(){
    float a;
    printf("Digite o valor do lado do quadrado  ");
    scanf("%f",&a);
    printf("RESPOSTA: %.2f",a*a);
    getche();
}
void per_retangulo(){
    float a,b;
    printf("digite os valores dos lados do retangulo  ");
    scanf("%f %f",&a,&b);
    printf("RESPOSTA: %.2f",(a*2)+(b*2));
    getche();
}
void area_retangulo(){
    float a,b;
    printf("digite os valores dos lados do retangulo  ");
    scanf("%f %f",&a,&b);
    printf("RESPOSTA: %.2f",a*b);
    getche();

}
void per_triangulo(){
    float b,h,r;
    printf("Informe a base e a altura do triangulo, respectivamente  ");
    scanf("%f%f",&b,&h);
    r=sqrt(pow(b,2)+pow(h,2));
    printf("RESPOSTA: %.2f",r);
    getche();
}
void area_triangulo(){
    float h,b,r;
    printf("Informe a base e a altura do triangulo, respectivamente  ");
    scanf("%f%f",&b,&h);
    r=(b*h)/2;
    printf("RESPOSTA: %.2f",r);
    getche();

}
void per_circulo(){
    float r,pi=3.1415,p;
    printf("Digite o raio do circulo  ");
    scanf("%f",&r);
    p=(r*(2*pi));
    printf("RESPOSTA: %.2f",p);
    getche();
}
void area_circulo(){
    float r,pi=3.1415,a;
    printf("Digite o raio do circulo  ");
    scanf("%f",&r);
    a= pi*(pow(r,2));
    printf("RESPOSTA: %.2f",a);
    getche();
}
