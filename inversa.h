#include <stdio.h>
#include <math.h>
void inversa(){
    float a=0,b;
    printf("digite o numero  ");
    scanf("%f",&a);
    b=1/a;
    printf("%.2f",b);
getche();
}
void quadrado(){
    int a;
    printf("digite o numero  ");
    scanf("%d",&a);
    printf("RESPOSTA: %d",a*a);
getche();
}
void cubo(){
int a;
    printf("digite o numero  ");
    scanf("%d",&a);
    printf("RESPOSTA : %d",a*a*a);
getche();
}
void pot (){
    int a,b,c;
    printf("Digite a base e o expoente , respectivamente  ");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    printf("RESPOSTA : %d",c);
getche();
}
