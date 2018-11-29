#include <stdio.h>
void prog_a(){
int a,b,i,c;
    printf("Em que numero deseja iniciar sua progrecao?  ");
    scanf("%d",&a);
    printf("Qual e' a rasao da sua progrecao?  ");
    scanf("%d",&b);
    printf("Qunatos termos deseja exibir?  ");
    scanf("%d",&c);
    printf("{%d ",a);
    for (i=0;i<c;i++){
            a=a+b;
        printf("%d ",a);
    }
    printf("}");
    getche();
}
void prog_g(){
int a,b,i,c;
    printf("Em que numero deseja iniciar sua progrecao?  ");
    scanf("%d",&a);
    printf("Qual e' a rasao da sua progrecao?  ");
    scanf("%d",&b);
    printf("Qunatos termos deseja exibir?  ");
    scanf("%d",&c);
    printf("{%d ",a);
    for (i=0;i<c;i++){
            a=a*b;
        printf("%d ",a);
    }
    printf("}");
    getche();
}
