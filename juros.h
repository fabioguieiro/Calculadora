#include <stdio.h>
void juros_simples(){
    float a,b,c,i,r;
    printf("Qual e' o qual se quer tirar os juros?  ");
    scanf("%f",&a);
    printf("Qual e' o valor dos juros?  ");
    scanf("%f",&i);
    printf("quantos meses se passaram?  ");
    scanf("%f",&b);
    c=( a*(i/100))*b;
    printf("O novo valor:  %.2f",a+c);
    getche();
}
void juros_comp(){
    float a,b,c=0,i,r,cont,j;
    printf("Qual e' o qual se quer tirar os juros?  ");
    scanf("%f",&a);
    printf("Qual e' o valor dos juros?  ");
    scanf("%f",&i);
    printf("quantos meses se passaram?  ");
    scanf("%f",&b);
    c=a;
    j=i/100;
    for(cont=0;cont<b;cont++){
        c=c+(c*j);
    }
    printf("O novo valor: %.2f",c);
    getche();
}
