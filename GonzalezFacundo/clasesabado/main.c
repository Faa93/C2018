#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>  //para que funciona el fpurge(stolin); que sirve para limpiar
#include <string.h> // para que lea string


//Trabajo practico

int main()
{
int flag, opcion, resultado;
float num1, num2;
/*por cada biblioteca que hagamos tenemos que rear dos archivos, uno .C y el otro .H,
TENEMOS QUE INCLUIR MATH.H (O EL NOMBRE DE LA BIBLIOTECA .H O .C) PARA QUE VAYA A BUSCAR LA INFO EN ESA LIBRERIA
INGRESAMOS A NEW > FILE > EMPTY FILE, LE AGREGAMOS NOMBRE Y LE DAMOS A SAVE. (MATH.C  = EJ)
AGREGAMOS OTRO, VAMOS A FILE, EMPTY FILE, Y CREAMOS MATH.H
EN EL .H van a estar TODAS LAS FIRMAS
EN EL .C TODO LO QUE ESTA POR DEBAJO DE MAIN, O SEA, LA IMPLEMENTACION

ENTRE COMILLAS "" ES UN ARCHIVO QUE ESTA LOCALMENTE
ENTRE <> ES UN ARCHIVO QUE ESTA EN C

O SINO

FILE > NEW > FILE > C HEADER y crea dos archivos
*/
do
{
    printf("1.Ingrese primer operando\n 2.Ingresar 2do operando\n");
    printf("\nIngrese una opcion del menu:");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
        ingresarNumero(num1):
        break;
        case 2:
        ingresarNumero(num2);
        break;
        case 3:
        printf("Calculando...");
        break;
        case 4:
        printf("Resultados");
        break;
        case 5:
        printf("Saliendo...");
        break;
        flag = 0;

    default:
        printf("Ingrese una opcion valida!\n");
    }


}while(flag !=0);

return 0;


}
int ingresarNumero (float* numero);
//1 2 3 puntos, DO {
//
//4. A B C D


//lucianavarela@hotmail.es
//
