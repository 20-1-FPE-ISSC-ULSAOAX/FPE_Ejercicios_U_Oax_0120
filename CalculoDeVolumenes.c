//Programa que llama a diferentes funciones para calcular el volumen de cuerpos geométricos.

#include <stdio.h>
#include <stdlib.h>


float volumen_cono(float radio, float altura);
float volumenDeEsfera(float radio);
float volumenDePiramide(float area, float altura);

int main()
{
    char c;
    float radio_base_cono, altura_cono, radio_esfera, altura_prisma, area_base_prisma;
    float area, altura;
    printf("Programa que calcula el volumen de cuerpos geometricos\n");
    printf("\n");
    printf("db    db  .d88b.  db      db    db .88b  d88. d88888b d8b   db \n");
    printf("88    88 .8P  Y8. 88      88    88 88'YbdP`88 88'     888o  88 \n");
    printf("Y8    8P 88    88 88      88    88 88  88  88 88ooooo 88V8o 88 \n");
    printf("`8b  d8' 88    88 88      88    88 88  88  88 88~~~~~ 88 V8o88 \n");
    printf(" `8bd8'  `8b  d8' 88booo. 88b  d88 88  88  88 88.     88  V888 \n");
    printf("   YP     `Y88P'  Y88888P ~Y8888P' YP  YP  YP Y88888P VP   V8P \n");
    printf("\n");
    
    printf("Radio de la esfera:\n");
    scanf("%f", &radio_esfera);
    while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
    printf("Volumen dela esfera es: %f",volumenDeEsfera(radio_esfera));
    
    //Aqui inicia para cono y prisma del equipo 1
    printf("Digite el area de la base: ");
    scanf("%f", &area_base_prisma);
    while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
    printf("Digite la altura: ");
    scanf("%f", &altura_prisma);
    while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
    printf("El volumen del prisma es %.4lf u^3", volumen_prisma(area_base_prisma,altura_prisma));
    
    printf("Digite el radio: ");
    scanf("%f", &radio_base_cono);
    while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
    printf("Digite la altura: ");
    scanf("%f",&altura_cono);
    while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
    printf("El volumen del cono es %.4lf u^3", volumen_cono(radio_base_cono,altura_cono));
    
    
    printf("Area de la base:\n");
    scanf("%f", &area);
    printf("la altura:\n");
    scanf("%f", &altura);
    printf("Volumen de la piramide es: %f",volumenDePiramide(area, altura));
    
}
