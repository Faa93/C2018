#include <stdio.h>
#include <stdlib.h>

int main()
/*{
   int valor=0;

   do{
    printf("%d\n", valor+1);
    valor++;
   }
    while(valor<10);

    do while muestra del 10 al 0
}
*/
{
    int valor=10;
    do{
        printf("%d\n", valor);
        valor--;
    }
    while(valor>0);
}

/* ventajas de do while contra while
ej.  printf("edad"); pido edad
        scanf("%d" &edad);
        while(edad<0||edad>100){
            printf("edad");
            scanf("%d" &edad);   //EN WHILE COMUN SOMOS REDUNDANTES, YA QUE VOLVEMOS A ESCRIBIR EL MISMO CODIGO
        }

EJ DO while

    do{
        printf("edad");
        scanf("%d", &edad);

        while(edad<0||edad>100)
    }

    while y do while se usan cuando NO SABEMOS LA CANTIDAD DE REPETICIONES.
    FOR se usa cuando sabemos LA CANTIDAD DE REPETICIONES.
