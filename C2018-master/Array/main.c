#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
   int pts[CANT]={1,0,3,3,1};
   int dg[CANT]={8,10,5,3,4};
   int auxdg,auxPts,i,j;

   for(i=0;i<CANT-1;i++){
    for(j=i+1;j<CANT;j++){
        if(pts[i]<pts[j]){
            auxPts=pts[i];
            pts[i]=pts[j];
            pts[j]=auxPts;

            auxdg=dg[i];
            dg[i]=dg[j];
            dg[j]=auxdg;
        }else{
        if(pts[i]==pts[j]){
            if(dg[i]<dg[j]){
            auxPts=pts[i];
            pts[i]=pts[j];
            pts[j]=auxPts;

            auxdg=dg[i];
            dg[i]=dg[j];
            dg[j]=auxdg;
                }
            }
        }
    }

  }
   for(i=0;i<CANT;i++){
    printf("Diferencia de puntos: %d   %d", pts[i], dg[i]);
 }

}


