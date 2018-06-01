#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    int id;
    char nombre[50];
}ePersona;
//getter=funciones que me permiten obtener(get) datos
int ePersona_getId(ePersona*);
char* ePersona_getNombre(ePersona*);
//getters/setter//encapsulamiento(cada campo privado
//setter
int Persona_setId(ePersona* pPersona, int );
int Persona_setNombre(ePersona* , char*);

int* Fuction_Malloc(ePersona* Persona);

int main()
{
    ePersona* pPersona;

    pPersona=(ePersona*)malloc(sizeof(ePersona));//recibe puntero void, (se viste de lo que uno quiera),puntero sizeof(estructura) y
    //malloc puede devolver una direccion de memoria y cuando no encuentra la cantidad de memoria que se pide devuelve NULL
    if(pPersona!=NULL)
    {
        if(Persona_setId(pPersona, 10)==-1)
        {
            printf("Id INCORRECTO!!");
        }
        else
        {
            if(Persona_setNombre(pPersona,"JUAN")==-1)
            {
                printf("Nombre incorrecto!.");
            }
            else{
                printf("%d --- %s", ePersona_getId(pPersona),ePersona_getNombre(pPersona));
            }

        }
    }
    return 0;
}

int* Fuction_Malloc(ePersona* Persona){
    int retorno;
    *retorno=(ePersona)malloc(sizeof(ePersona));
    return *retorno;
}

int Persona_setId(ePersona* this, int id)
{
    int retorno=-1;
        if(this != NULL && id>0)
        {
            this->id=id;//como se asiga el id a this
            retorno=1;
        }

    return retorno;
}

int Persona_setNombre(ePersona* this, char* nombre)
{
        int retorno=-1;
        if(this != NULL && nombre!=NULL && strlen(nombre)>3)
        {
            strcpy(this->nombre,nombre);//como se asiga el id a this
            retorno=1;
        }

    return retorno;
}

int ePersona_getId(ePersona* this)
{
    int retorno=-1;
    if(this!=NULL) {
        retorno=this->id;
    }
    return retorno;
}

char* ePersona_getNombre(ePersona* this)
{
    char* retorno=NULL;
    if(this !=NULL)
    {
        retorno = this->nombre;
    }
    return retorno;
}
