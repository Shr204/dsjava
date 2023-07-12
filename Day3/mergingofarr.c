#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[] ={1,2,3}, b[] = {4,5,6};
   int na, nb;
   na = sizeof(a)/sizeof(a[0]);
   nb = sizeof(b)/sizeof(b[0]);
  
   int c[na+nb];
   //forloopforaddingelementsfromatoc
   for(int i = 0; i<na; i++){
     c[i]  = a[i];
   }
   //forloopforaddingelementsfrombtoc
   for(int j = 0; j<nb; j++){
       c[na+j] = b[j];
   }
   //printingthedetails
   printf("\nSize of a: %d ", na);
   printf("\nSize of b: %d ", nb);
   printf("\nSize of c: %d ", na+nb);
   printf("\nMerged array: \n");
   for(int k = 0; k<(na+nb); k++){
       printf("%d", c[k]);
   }
   
}
