#include <stdio.h>
#include <stdlib.h>
#define tam 5
int main()
{
    //Realloc : Reasigna mas memoria
    //realloc(sizeof(int) * 10 ) (por el doble)
    //1) encuentra
    //2)no encuentra -> reasigna
    //3)no encuentra -> NULL
    int* aux;
    int* pVector;
    int i;
    pVector =(int*)malloc(sizeof(int) * tam);// se multiplica por la cantidad de memoria que sea necearia

    if(pVector!=NULL)
    {
        for(i=0;i<tam;i++)
        {
            *(pVector+i)=i+1;
        }
        for(i=0;i<tam;i++)
        {
            printf(" %d \n",*(pVector+i));
        }
        aux=(int*)realloc(pVector,sizeof(int)*(tam*2)); // pVector(primer parametro) desde donde empieza...
        if(aux!=NULL) // se usa un auxiliar para no perder informacion del pVector(puntero)
        {
            pVector = aux;

            for(i=tam;i<tam*2;i++)
            {
                *(pVector+i)=i+1;

            }
            printf("\n LUEGO DEL REALLOC \n");

            for(i=0;i<tam*2;i++)
            {
                printf(" %d \n",*(pVector+i));
            }
            aux=(int*)realloc(pVector,sizeof(int) *4);
            if(aux!=NULL)
            {
                pVector=aux;
                printf("\n LUEGO DEL REALLOC por menos\n");
                for(i=0;i<4;i++)
                {
                    printf(" %d \n",*(pVector+i));
                }
            }
            free(aux); // libre la memoria, ya utilizada
        }
    }

    return 0;
}
