#include <stdio.h>
void dec_bin (){
    int a;
    char str[10];
    printf("Qual o numero ?   ");
    scanf("%d",&a);
    itoa(a,str,2);
    printf("Em Binario:  %s",str);
    getche();
}
void bin_dec(){
   int dec=0,num,d=1;


printf("Digite o numero binario: ");
scanf("%d",&num);

do{
dec = dec+(num%10)*d;
d = d*2;
num = num/10;

}while(num!=0);

printf(" O numero em decimal e %d",dec);
getche();
}
void dec_oct (){
    int a;
    printf("Digite o numero ");
    scanf("%d",&a);
    printf("Em Octal:  %o",a);
    getche();
}
void oct_dec(){
    int a;
    printf("Digite o numero ");
    scanf("%o",&a);
    printf("Em Decimal:  %d",a);
    getche();
}
void dec_hx(){
    int a;
     printf("Digite o numero ");
    scanf("%d",&a);
    printf("Em Hexadecimal:  %x",a);
    getche();
}
void hx_dec(){
    int a;
     printf("Digite o numero ");
    scanf("%x",&a);
    printf("Em Decimal:  %d",a);
    getche();
}
