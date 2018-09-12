#include <stdio_ext.h>
#include <stdlib.h>


int main()
{
    static int getInt(int* pBuffer) //el static hace que la funcion pueda ser utilizada solo en mi documento, no se puede utlizar fuera de este)
    {
    return scanf("%d", pBuffer);
    }

    int utn_getENtero(int* pEntero, int reintentos, char msg[], char msgErr[], int min, int max);

{
    int retorno=-1;
    int bufferInt; //los buffer son las variables intermedias
    if(pEntero != NULL && msg != NULL && msgErr != NULL && min <= max && reintentos >= 0)
    {
        do
        {
        reintentos--;
        prinf("%s", msg);
         //fflush(wind) o purge(linux) va en esta linea si no sabes donde ponerlo
        if(getInt(bufferInt) == 1)
        {//eliminamos el scanf("%d", & bufferInt) y ponemos getInt(bufferINt) para que quede ordenado
            if(bufferInt >= min && bufferInt <= max) //no es necesario soeparar dos if si no va a haber nada dentro del ultimo, en este caso se concatena con &&
            {
                *pEntero = bufferInt;
                retorno = 0;
                break;

            }
            else
            {
                printf("%s", msgErr);
                __fpurge(stdin);
            }

        } //el & le pide buscar en la posicion de memoria. SI EL SCANF LOGRO LO QUE TENIA QUE BUSCAR DEVUELVE 1

        }while(reintentos >= 0);


    }

    return retorno;





}






}
