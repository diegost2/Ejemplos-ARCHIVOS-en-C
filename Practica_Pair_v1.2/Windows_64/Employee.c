#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    Employee* Empleado_A;
    Employee* Empleado_B;
    int retorno=0;
    Empleado_A=(Employee*)pEmployeeA;
    Empleado_B=(Employee*)pEmployeeB;
    if(Empleado_A!=NULL && Empleado_B!=NULL)
    {
         retorno=strcmp(Empleado_A->name,Empleado_B->name);
    }

    return retorno;
}


void employee_print(Employee* this )
{

    printf("ID: %d\tName: %s\tLastName: %s\t Ocupado: %d \n",this->id,this->name,this->lastName,this->isEmpty);

}


Employee* employee_new(int id, char* name, char* lastName, char* isEmpty)
{

    Employee* returnAux = NULL;
    Employee* list;
    if(List!=NULL)
    {
        list->id=id;
        strcpy();
    }
    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{
    int retorno=-1;

    if(this!=NULL)
    {
        this->id=id;
        retorno=1;
    }

    return retorno;
}

int employee_setisEmpty(Employee* this, int isEmpty)
{
    int retorno=-1;

    if(this!=NULL)
    {
        this->isEmpty=isEmpty;
        retorno=1;
    }

    return retorno;
}

int employee_setName(Employee* this, char* name)
{
    int retorno=-1;

    if(this!=NULL)
    {
        strcpy(this->name,name);
        retorno=1;
    }

    return retorno;
}

int employee_setLastName(Employee* this, char* LastName)
{
    int retorno=-1;

    if(this!=NULL)
    {
        strcpy(this->lastName,LastName);
        retorno=1;
    }

    return retorno;
}

int employee_getId(Employee* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
        retorno=this->id;
    }
    return retorno;
}

char* employee_getName(Employee* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->name;
    }
    return retorno;
}

char* employee_getlastName(Employee* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->lastName;
    }
    return retorno;
}

