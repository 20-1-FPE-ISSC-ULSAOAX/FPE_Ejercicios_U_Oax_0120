#include <math.h>
#define PI 3.1416

float volumen_cono(float radio_base_cono, float altura_cono){
    float vol_cono;
    vol_cono = (altura_cono * M_PI * pow(radio_base_cono, 2)) / 3;
    return vol_cono;
}

float volumen_prisma(float area_base_prisma, float altura_prisma){
    float vol_prisma;
    vol_prisma = area_base_prisma * altura_prisma;
    return vol_prisma;
}

float volumenDeEsfera(float radio) {
  return (4 * (PI * radio*radio*radio)) / 3;
}

float volumenDePiramide(float area, float altura) {
  return (area*altura)/3;
}

float VParale(float x,float y,float t)
{
    	float volp=x*y*t;
    	return volp;
}

float Vcili(float t,float v)
{
    	float volc=t*v*M_PI;
    	return volc;
}

float volumen_cubo(float arista)
{
     return(pow(arista,3));
}

float volumen_cilindro(float radio, float altura)
{
	return((radio*radio)*PI*altura);
}
