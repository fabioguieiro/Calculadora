#include <stdio.h>
#include <stdlib.h>
#include "aritimetica.h"
#include "inversa.h"
#include "fatorial.h"
#include "seno.h"
#include "area.h"
#include "verifica.h"
#include "contantes.h"
#include "juros.h"
#include "progrecao.h"
#include "media.h"
#include "convert.h"
int main(){
    int op,arit,inv,fat,sen,area,area1,area2,co,jur,prog,m,bin;
    printf("\t\t\tESCOLHA UMA OPCAO\n\n\n1-Aritimetica,soma,subtracao,multiplicacao,divisao e resto\n2-inverso,quadrado,cubo e potencia\n3-Fatorial raiz quadrada e logaritimos\n4-Seno, cosseno,tangente,cotangente,secante, cossecante\n5-Areas e perimetros\n6-candoção de existencia de um triangulo\n7-valor de pi, e E\n8-calcular juros simples e compostos\n9-Progracao aritimetica e geometrica\n10-Media e desvio padrao\n11-Convercao entre bases\n\n\n");
    scanf("%d",&op);
    system("cls");
    switch(op){
        case 1:
            printf("1-Soma\n2-Subtracao\n3-Multiplicacao\n4-divisao\n5-Resto\n\n\n");
            scanf("%d",&arit);
            system("cls");
            switch(arit){
                case 1:
                    soma();
                    break;
                case 2:
                    sub();
                    break;
                case 3:
                    mult();
                    break;
                case 4:
                    divisao();
                    break;
                case 5:
                    resto();
                    break;
            }
            break;
        case 2:
            printf("1-Inverso\n2-Quadrado\n3-Cubo\n4-Potencia\n\n");
            scanf("%d",&inv);
            system("cls");
            switch(inv){
                case 1:
                    inversa();
                    break;
                case 2:
                    quadrado();
                    break;

                case 3:
                    cubo();
                    break;
                case 4:
                    pot();
                    break;
            }
            break;
                case 3:
                    printf("1-Fatorial\n2-Raiz Quadrada\n3-Lg2\n4-Lg10\n5-Ln\n\n");
                    scanf("%d",&fat);
                    system ("cls");
                    switch(fat){
                        case 1:
                            fator();
                            break;
                        case 2:
                            raiz();
                            break;
                        case 3:
                            lg2();
                            break;
                        case 4:
                            lg10();
                            break;
                        case 5:
                            ln();
                            break;
                    }
            break;
        case 4:
            printf("1-Seno\n2-Cosseno\n3-Tangente\n4-Cotangente\n5-Cossecante\n6-Secante\n\n");
            scanf("%d",&sen);
            system("cls");
            switch (sen){
                case 1:
                    ssen();
                    break;
                case 2:
                    cosseno();
                    break;
                case 3:
                    tangente();
                    break;
                case 4:
                    cotangente();
                    break;
                case 5:
                    cossecante();
                    break;
                case 6:
                    secante();
            }
            break;
        case 5:
            printf("1-Perimetro\n2-Area\n\n\n");
            scanf("%d",&area);
            system("cls");
                switch (area){
                case 1:
                        printf("1-Quadrado\n2-Retangulo\n3-Triangulo\n4-Circulo\n\n\n");
                        scanf("%d",&area1);
                        system("cls");
                        switch (area1){
                            case 1:
                                per_quadrado();
                                break;
                            case 2:
                                per_retangulo();
                                break;
                            case 3:
                                per_triangulo();
                                break;
                            case 4:
                                per_circulo();
                                break;
                        }
                        break;
                        case 2:
                            printf("1-Quadrado\n2-Retangulo\n3-Triangulo\n4-Circulo\n\n\n");
                            scanf("%d",&area2);
                            system ("cls");
                            switch(area2){
                                case 1:
                                area_quadrado();
                                break;
                            case 2:
                                area_retangulo();
                                break;
                            case 3:
                                area_triangulo();
                                break;
                            case 4:
                                area_circulo();
                                break;
                            }
                }

        case 6:
            ver_tri();
            break;
        break;
        case 7:
            printf("1-PI\n2-Euler\n\n\n");
            scanf("%d",&co);
            system("cls");
            switch(co){
                case 1:
                    pi();
                    break;
                case 2:
                    euler();
                    break;
            }
        break;
        case 8:
            printf("1-Juros Simples\n2-Juros Compostos\n\n\n");
            scanf("%d",&jur);
            system ("cls");
            switch(jur){
                case 1:
                    juros_simples();
                    break;
                case 2:
                    juros_comp();
                    break;
            }
        break;
        case 9:
            printf("1-PA\n2-PG\n\n\n");
            scanf("%d",&prog);
            system("cls");
            switch(prog){
                case 1:
                    prog_a();
                    break;
                case 2:
                    prog_g();
                    break;

            }
            break;
        case 10:
            printf("1-Media\n2-Desvio Padrao\n\n\n");
            scanf("%d",&m);
            system ("cls");
            switch (m){
                case 1:
                    md();
                    break;
                case 2:
                    d_p();
                    break;
            }
            break;
        case 11:
            printf("1-int/bin\n2-bin/int\n3-int/octal\n4-octal/int\n5-int/hexa\n6-hexa/int\n\n\n\n");
            scanf("%d",&bin);
            system ("cls");
            switch (bin){
                case 1:
                    dec_bin();
                    break;
                case 2:
                    bin_dec();
                    break;
                case 3:
                    dec_oct();
                    break;
                case 4:
                    oct_dec();
                    break;
                case 5:
                    dec_hx();
                    break;
                case 6:
                    hx_dec();
                    break;
            }
            break;
    }
    return 0;
}
