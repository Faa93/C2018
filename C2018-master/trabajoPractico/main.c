#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*en el archivo .H van a ir los prototipos (declaraciones) suma resta, multiplicacion, division prototipos
    en el archivo .C van a ir los cuerpos (definiciones) aca van los codigos completos de lo que
    y eso compondra el main.c

    nosotros ya inlcuimos las bibliotecas #include <stdio.h> y <stddlib.h> y

    En las las switch(opcion)
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


}while(flag !=0);switch(opcion)
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


}while(flag !=0); con <> son aquellas que el compilador va a buscar en


    #include "c:\\proyectos\\funciones\\calculadora.h"  RUTA ABSOLUTA(va a ir a buscar la biblioteca en esta ubicacion y solo esta ubicacion, si no esta, no muestra nada)

    .\\ -> m dice en que directorio actualmente esta.

    #include ".\\calculadora.h"  (no importa donde sea que este, va a buscar este archivo)  RUTA
    #include ".\\bibliotecas\\calculadora.h" -> si tenes varias biblitecas podes pedirle buscarla en la biblioteca.




-------------------------------------------
RESOLVER FACTOREO SIN USAR RECURSIVIDAD

INT VALOR, RESULTADO=1 , I;
FOR(I =VALOR ; I>0; I--){
RESULTADO=RESULTADO*I;
}
-------------------------------------------
    */


   int  numeroUno, numeroDos, opcion, flag;


    do{
        printf("Ingrese el primer numero:\n Ingrese el segundo numero:\n");
        printf("\nIngrese una opcion del menu:");
        scanf("%d", &opcion);switch(opcion)
    {
        case 1:
        numeroUno (numeroUno):
        break;
        case 2:
        numeroDos (numeroDos);
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

    }








}




