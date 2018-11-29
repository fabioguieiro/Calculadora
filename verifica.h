#include <stdio.h>
void ver_tri(){
float a,b,c;
    printf("digite os tres lados do triangulo  ");
scanf("%f%f%f",&a,&b,&c);
        if(a>=b+c || b>=a+c || c>=b+a){
            printf("TRIANGULO INVALIDO  ");
            getche();
        }
        else{
            printf("TRIANGULO VALIDO  ");
            getche();
        }
}
