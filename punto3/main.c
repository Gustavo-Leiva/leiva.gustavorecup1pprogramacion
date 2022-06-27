#include <stdio.h>
#include <stdlib.h>


/*
3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro
y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena. Ejemplo si le pasamos
"algoritmo" la deja como "agilmoort"
*/

int  ordenarCharAscendente( char vec[], int tam);

int main()
{




    return 0;
}


int  ordenarCharAscendente( char vec[], int tam)
{
    int todoOk = 0;
    char aux;

    if(vec!= NULL && tam >0)
    {
        for (int i = 0; i< tam-1; i++)

        {
            for (int j = i+1; j < tam; j++ )
            {
                if(vec[i] > vec[j])
                {
                    aux = vec[i];
                    vec [i]= vec[j];
                    vec[j]= aux;
                }

            }

        }

    }

}
