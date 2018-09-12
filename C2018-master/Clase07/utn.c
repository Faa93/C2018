#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"


static int getInt(int* pBuffer)
{
    return scanf("%d",pBuffer);
}


float utn_getFloat(float* pFloat, char*msg,
                    char msgErr[], float min, float max,
                    int reintentos)

{
    int retorno=-1;
    float bufferFloat;
    if(pFloat != NULL && msg != NULL && msgErr != NULL
        && min <= max && reintentos >= 0)
    {
        do
        {
            reintentos--;
            printf("%s",msg);
            if( (getFloat(&bufferFloat) == 1) &&
                (bufferFloat >= min && bufferFloat <= max))
            {
                *pFloat = bufferFloat;
                retorno = 0;
                break;
            }
            else
            {
                __fpurge(stdin);
                printf("%s",msgErr);
            }
        }while(reintentos>=0);

    }
    return retorno;
}

//TERMINAR, TENGO QUE HACER EL CHAR Y NO ME FUNCIONA EL FLOAT :DDDDDDDD
//



















