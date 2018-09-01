#include <stdio.h>
#include <stdlib.h>
#define ESC 27  //defino la tecla ESC que es el numero ASCII 27 para cancelar
int main()
{
    char seguir;
    int maximo=0;
    int minimo=0;
    int numero;
    int flag=0;

    do{
    system("cls"); //limpia la pantalla cada vez que reingresa
    printf("Ingrese un numero %c",numero);
    scanf("%c",&numero);
    do{
    system("cls"); //limpia la pantalla cada vez que reingresa
    printf("Ingrese un numero %c",numero);

    if(flag==0)     //inicializo la bandera desde 0
        {
            minimo=numero;   //la bandera va a ser maximo y minimo y se usara solo una vez
            maximo=numero;
            flag=1;
        }
    if(numero>maximo)
        {
            maximo=numero;
        }
    if(numero<minimo)
        {
            minimo=numero;
        }

    printf("Presione ESC para salir, cualquier otra tecla para continuar... %c");
    //getch es igual a scanf sin esperar el enter      //SOLO SE USA FFLASH(STOLIN); CUANDO ES UN ELEMENTO %S %C;


    }
    while(seguir !=ESC);

    printf("maximo:%c\n minimo:%c", maximo, minimo);
}

/*
if(flag==0||nro>max){
    max=nro;
}
if(flag==0||nro<min){
    min=nro;
    flag=1;
}
manera mas simple de mostrar maximos y minimos con una sola bandera
*/
