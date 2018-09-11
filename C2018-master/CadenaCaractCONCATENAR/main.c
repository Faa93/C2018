#include <stdio.h>
#include <stdlib.h>
#include <string.h> //para poder leer string
#include <ctype.h> //para poder leer tipo char

//strlwr(nombre); PASA TODOS LOS CARACTERES A MINUSCULA
//strupr(nombre); PASA TODOS LOS CARACTERES A MAYUSCULA
//tolower(nombre); PASA UN SOLO CARACTER A MINUSCULA
//toupper(nombre; PASA UN SOLO CARACTERA MINUSCULA      nombre[posicion de letra]=toupper[posicion de letra]);


int main()
{
char nombre [31];
char apellido [31];
char apeNom [62];
int cantidad; //Se define la cantidad para poder utilizar el strlen y poder eliminar los espacios y el salto de linea
int i;

printf("Nombre: ");
fgets(nombre, sizeof(nombre)-2,stdin);
cantidad=strlen(nombre); //eliminamos el espacio adicional
nombre[cantidad-1]='\0';
strlwr(nombre);
nombre[0]=toupper(nombre[0]);
for(i=0;i<cantidad;i++){  //CON ESTA FUNCION TRANSFORMAMOS LA PRIMER LETRA DE CUALQUIER CHAR COMPLETO EN MAYUSCULA (O MINUS, COMO ELIJAMOS)
    if(nombre[i]==' ' && nombre[i+1]!='\0'){
        nombre[i+1]=toupper(nombre[i+1]);
    }
}

printf("Apellido: ");
fgets(apellido, sizeof(apellido)-2,stdin);
cantidad=strlen(apellido); //Eliminamos el salto de linea
apellido[cantidad-1]='\0';
strlwr(apellido);
apellido[0]=toupper(apellido[0]);

for(i=0;i<cantidad;i++){
    if(apellido[i]==' ' && apellido[i+1]!='\0'){
        apellido[i+1]=toupper(apellido[i+1]);
    }
}

/*
METODO 1
strcpy(apeNom, apellido);
strcat(apeNom," "); //apenom y un espacio en blanco para dejar el espacio para el nombre
strcat(apeNom, nombre); //contactenamos el nombre
*/

//METODO 2
apeNom[0]='\0'; //en el primer (espacio de memoria 0) pusimos un \0 para limpiar
strcat(apeNom, apellido);
strcat(apeNom, " "); //pusimos un espacio entre el apellido y lo que viene
strcat(apeNom, nombre); //definimos el nombre

printf("%s", apeNom);






}
