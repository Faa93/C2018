#include <stdio.h>
#include <stdlib.h>
#define cant 5


int main()
{
   int i, s;
   int edad [cant];
   float salario [cant];



   for(i=0; i<cant; i++){
    printf("Ingrese la edad: ");
    scanf("%d", &edad[i]);
   }

   for(s=0;s<cant; s++){
    printf("Ingrese el salario: ");
    scanf("%d", &salario[s]);

    for(i=0;i<cant;i++){
    printf("%d", edad[i]);
   }

   for(s=0;s<cant;s++){
    printf("%d", salario[s]);
   }


   }
   scanf("%d", edad);
   scanf("%d", salario);
}
