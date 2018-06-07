#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    ArrayList* lista;
    lista=al_newArrayList();
    //lista=(lista)(malloc(sizeof(lista)));


    int intAux;
    Employee* empl;
    empl = (Employee*)malloc(sizeof(Employee));
    empl->id=666;
    strcpy(empl->name,"Juan");
    strcpy(empl->lastName,"Gomez");
    empl->isEmpty=1;
    //----------------------------------------------

    //----------------------------------------------

    //-----------------------------------------------
    Employee* eAuxEmpleado;
    eAuxEmpleado=(Employee*)al_get(lista,0); // pegando la direccion de memoria en la posicion// castear a puntero a employee siempre
    //-----------------------------------------------
    //-----------------------------------------------

    Employee* empl2;
    empl2 = (Employee*)malloc(sizeof(Employee));
    empl2->id=555;
    strcpy(empl2->name,"Jose");
    strcpy(empl2->lastName,"Perez");
    empl2->isEmpty=2;

    //-----
    al_add(lista, empl);
    al_add(lista, empl2);
    //------------------------------------------------
    intAux=al_len(lista); // tamanio del array
    printf("Tamanio: %d \n",intAux);
    int i;
    for(i=0;i<intAux;i++){
    eAuxEmpleado=(Employee*)al_get(lista,i);
    employee_print(eAuxEmpleado); // muestra el contenido
    }
    printf("\n despues de sort\n");
    al_sort(lista,employee_compare,1); // puntero,funcion compare,criterio de ordenamiento

    for(i=0;i<intAux;i++){
    eAuxEmpleado=(Employee*)al_get(lista,i);
    employee_print(eAuxEmpleado); // muestra el contenido
    }


    return 0;
}
