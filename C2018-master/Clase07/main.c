#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"


#define CANTIDAD_EMPLEADOS 6

int main()
{
    int edades[CANTIDAD_EMPLEADOS];
    float salario[CANTIDAD_EMPLEADOS];


    int i;
    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        if(utn_getFloat(&edades[i],"\nEdad?","\nEdad fuera de rango",0,200,2)==-1)
        {
            edades[i] = -1;
        }
    }






    return 0;
}






