#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *aarchivo;
    int limite;
    char c;

    aarchivo = fopen("miarchivo.txt", "w");
    if(aarchivo == NULL)
    {
        printf("Error al abrir archivo.\n");
        return(1);
    }
    //Mensaje para el usuario
	printf("¿Hasta que número deseas calcular los numeros primos?\n");
	scanf("%d", &limite);
	while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
	fprintf(aarchivo, "los numeros primos entre 2 y %d son:\n", limite);

	int contador;
	for (contador = 2; contador <= limite; contador++)
	{
		int contador1, es_primo = 1;
		for (contador1 = 2; contador1 < contador; contador1++)
		{
			if (contador % contador1 == 0)
			{
				es_primo = 0;
				break;
			}
		}
		if (es_primo)
			fprintf(aarchivo, "%d, ", contador);
	}
    fclose(aarchivo);
}
