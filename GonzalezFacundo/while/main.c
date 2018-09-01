#include <stdio.h>
#include <stdlib.h>

int main()
{
int valor=0;
while(valor<10){
    printf("%d\n", valor+1);
    valor++;
}
return 0;
}

/*muestra numeros del  0 al 10.
el while necesita de una condicion verdadera y dentro del mismo una iteraccion falsa.
ej: while(condicion){
      .... (verd)
      .... (verd)
      .... (fals)
}
*/
