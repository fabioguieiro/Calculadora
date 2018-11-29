#include <stdio.h>
#include <math.h>
void fator(){
    int i,n,fat=1;
    printf("Digite o numero  ");
    scanf("%d",&n);
    if (n>1){
    for (i=n;i>1;i--){
        fat=i*fat;
    }
    }
    else{
        printf("NUMERO INVALIDO");
        return 0;
        }
    printf("RESPOSTA : %d ",fat);
    getche();
}
void lg2(){
    float n=0,r=0;
    printf("Digite o numero ");
    scanf("%f",&n);
    r = log2(n);
    printf("RESPOSTA: %.2f",r);
    getche();
}
void raiz(){
    float n,r;
    printf("Digite o numero  ");
    scanf("%f",&n);
    if (n>0){
        r=sqrt(n);
        printf("RESPOSTA: %.2f  ",r);
    }
    else{
        printf("NUMERO INVALIDO !!");
        return 0;
    }
    getche();
}
void lg10(){
        float n=0,r=0;
    printf("Digite o numero ");
    scanf("%f",&n);
    r = log10(n);
    printf("RESPOSTA: %.2f",r);
    getche();
}
void ln(){
    float n=0,r=0;
     printf("Digite o numero ");
    scanf("%f",&n);
    r = log(n);
    printf("RESPOSTA: %.2f",r);
    getche();
}
