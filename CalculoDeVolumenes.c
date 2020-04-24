//Programa que llama a diferentes funciones para calcular el volumen de cuerpos geométricos.

#include <stdio.h>
#include <stdlib.h>


float volumen_cono(float radio, float altura);
float volumen_prisma(float area_base_prisma, float altura_prisma);
float volumenDeEsfera(float radio);
float volumenDePiramide(float area, float altura);
float VParale(float x,float y,float t);
float Vcili(float t,float v);
float volumen_cubo(float );

int main()
{
    int opc;
    char c;
    float radio_base_cono, altura_cono, radio_esfera, altura_prisma, area_base_prisma;
    float area, altura, a, l, h, r, h1, lado;
    printf("Programa que calcula el volumen de cuerpos geometricos\n");
    printf("\n");
    printf("db    db  .d88b.  db      db    db .88b  d88. d88888b d8b   db \n");
    printf("88    88 .8P  Y8. 88      88    88 88'YbdP`88 88'     888o  88 \n");
    printf("Y8    8P 88    88 88      88    88 88  88  88 88ooooo 88V8o 88 \n");
    printf("`8b  d8' 88    88 88      88    88 88  88  88 88~~~~~ 88 V8o88 \n");
    printf(" `8bd8'  `8b  d8' 88booo. 88b  d88 88  88  88 88.     88  V888 \n");
    printf("   YP     `Y88P'  Y88888P ~Y8888P' YP  YP  YP Y88888P VP   V8P \n");
    printf("\n");

    printf("A continuacion seleccione de que figura quiere determinar el volumen: \n1 Esfera \n2Prisma \n3Cono \n4Piramide \n5Paralelepipedo \n6Cilindro \n7Cubo \n");
    scanf("%d", &opc);

    switch(opc){
        case 1:
        printf("Radio de la esfera:\n");
        scanf("%f", &radio_esfera);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("Volumen dela esfera es: %f\n",volumenDeEsfera(radio_esfera));
        break;

        //Aqui inicia para cono y prisma del equipo 1
        case 2:
        printf("Digite el area de la base: ");
        scanf("%f", &area_base_prisma);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("Digite la altura: ");
        scanf("%f", &altura_prisma);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("El volumen del prisma es %.4lf u^3\n", volumen_prisma(area_base_prisma,altura_prisma));
        break;

        case 3:
        printf("Digite el radio: ");
        scanf("%f", &radio_base_cono);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("Digite la altura: ");
        scanf("%f",&altura_cono);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("El volumen del cono es %.4lf u^3\n", volumen_cono(radio_base_cono,altura_cono));
        break;

        case 4:
        printf("Area de la base:\n");
        scanf("%f", &area);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("la altura:\n");
        scanf("%f", &altura);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("Volumen de la piramide es: %f\n",volumenDePiramide(area, altura));
        break;

        case 5:
        printf("\n\nDame el primer lado\n");
        scanf("%f",&a);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("Dame el segundo lado\n");
        scanf("%f",&l);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("Dame la altura\n");
        scanf("%f",&h);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("El volumen del paralelepipedo es de %f \n",VParale(a,l,h));
        break;

        case 6:
        printf("Dame el Radio del cilindro");
        scanf("%f",&r);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("Dame la altura");
        scanf("%f",&h1);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("El volumen del cilindro es de %f \n",Vcili(l,h1));
        break;

        case 7:
        printf("\nIngrese la medida de un lado del cubo: ");
        scanf("%f",&lado);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("El volumen del cubo es de %f \n", volumen_cubo(lado));
        break;
    }
}

