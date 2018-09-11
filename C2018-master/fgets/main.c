#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buffer[64];
    int cantidad;

    //fgets(buffer,sizeof(buffer)-2,stdin);
    fgets(buffer,62,stdin);

    cantidad = strlen(buffer); //CUENTA LA CANTIDAD DE CARACTERES QUE HAY DENTRO DEL PARENTESIS

    buffer[cantidad-1] = '\0'; //EL \N LO TRANSFORMA EN \O

    printf("%s", buffer);

    return 0;
}
