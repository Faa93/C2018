#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
/*
fabricar un vector en char

(EL ORIGEN PUEDE SER UNA VARIABLE, UNA CONSTANTE O UN VALOR LITERAL "..." , EN CAMBIO EL DESTINO ES SOLO UNA VAR)
%s SE USA CUANDO SE TRABAJA CON UNA CADENA DE CARACTERES.

EN EL SCANF NO ES NECESARIO PONER EL &

EL FGETS VA A CONTAR LOS CARACTERES DE LA PALABRA, VA A AGREGAR EL \0 Y ADEMAS VA A AGREGAR UN \N ANTES DEL \0, POR LO QUE SE AGREGA UN BIT MAS


*/

char nombre[30];
int cantidad;


printf("Nombre:");
//fflush(stdin);

scanf("%[^\n]", nombre);//el %[^\n] suplanta al %s o sino nos sirve la funcion fgest(cadena, cantidad, stdin);
fgets(nombre,28,stdin);

cantidad=strlen(nombre);


nombre=[cantidad-1]= '\0';

// strcpy(nombre, "Facundo Gonzalez"); NO ES NECESARIO A LA HORA DE PEDIR DATOS, SINO DE COPIARLOS

printf("Su nombre es: %s", nombre);
return 0;

//char palabra[10]="hola";
//char palabra[10]={"h","o","l","a","\0"};
//char palabra[ ]="hola";




}
