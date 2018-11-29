#include <stdio.h>
void soma(){
int a,b,c;
    printf("qual o primeiro numero  ");
    scanf("%d",&a);
    printf("qual o segundo numero  ");
    scanf("%d",&b);
    c=a+b;
    printf("RESULTADO: %d\n",c);
    getche();
}
void sub(){
int a,b,c;
    printf("qual o primeiro numero  ");
    scanf("%d",&a);
    printf("qual o segundo numero  ");
    scanf("%d",&b);
    c=a-b;
    printf("RESULTADO: %d\n",c);
    getche();
}
void mult(){
    int a,b,c;
    printf("qual o primeiro numero  ");
    scanf("%d",&a);
    printf("qual o segundo numero  ");
    scanf("%d",&b);
    c=a*b;
    printf("RESULTADO: %d\n",c);
    getche();
}
void divisao(){
    float a,b,c;
    printf("qual o primeiro numero  ");
    scanf("%f",&a);
    printf("qual o segundo numero  ");
    scanf("%f",&b);
    c=a/b;
    printf("RESULTADO: %.2f\n",c);
    getche();
}
void resto(){
    int a,b,c;
    printf("qual o primeiro numero  ");
    scanf("%d",&a);
    printf("qual o segundo numero  ");
    scanf("%d",&b);
    c=a%b;
    printf("RESULTADO: %d",c);
    getche();
}
