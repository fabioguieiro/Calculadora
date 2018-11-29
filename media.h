#include <stdio.h>
#include <math.h>
void md(){
int n,i;
float a=0,r=0,soma=0;
    printf("Quantas vezes o programa deve executar?  ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Digite o numero:  ");
        scanf("%f",&a);
        soma=soma+a;
    }
    r=soma/n;
    printf("RESPOSTA:   %.2f",r);
    getche();
}
void d_p(){
    int n,i;
float amostra[100],media,variancia,desvio;
float soma = 0;
printf("Quantas vezes o programa deve executar?  ");
    scanf("%d",&n);
for (i=0;i<n;i++){
        printf("Digite o numero:  ");
scanf("%f",&amostra[i]);
soma += amostra[i];
media = soma/n;
}
soma = 0;
for (i=0;i<n;i++) {

soma += pow((amostra[i]-media),2);
variancia = soma/(n-1);
desvio = sqrt(variancia);
}
printf("RESPOSTA: %.2f",desvio);
getche();
}
