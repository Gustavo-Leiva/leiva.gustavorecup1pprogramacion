#include <stdio.h>
#include <stdlib.h>

/*

2. Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro
y su responsabilidad es invertir los caracteres de la misma.
Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU
*/



char invertirCadena(char vec [], int tam);

int main()
{


    return 0;
}


char invertirCadena(char vec [], int tam)
{
    int todoOk = 0;



    if(vec != NULL && tam >0)
    {

        for (int i = strlen(cadena); i > 0; i--)
        {

            printf("%s ", cadena [i]);

        }

        printf("\n\n");
        todoOk = 1;
    }

    return todoOk;

}
