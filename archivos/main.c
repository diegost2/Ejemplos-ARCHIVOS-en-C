#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    char cadena[50]="hola ";

    pArchivo = fopen("archivo.txt","w");

    if(pArchivo!=NULL)
    {
        fprintf(pArchivo,"%s %d",cadena,156); //solo se le pasa string // se puede pasar otro tipo de dato pero siempre empezando por string.
        fclose(pArchivo);
        printf("Guardado!");
    }
    else
    {
        printf("Imposible guardar");
    }


   /* pArchivo = fopen("archivo.txt","r");

    if(pArchivo!=NULL)
    {
        while(!feof(pArchivo))//(mientras no sea el final) !feof = muestra las demas lineas
        {

         fgets(cadena,50,pArchivo);// fgets = lee solo la primera linea
         puts(cadena);// indicador de final de linea
        }
        fclose(pArchivo);
    }*/
    return 0;
}
