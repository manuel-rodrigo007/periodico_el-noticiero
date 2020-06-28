#include <stdio.h>
#include <conio.h>
main ()
{
int f=0,c=0,n,x=0,i=0,fac=1;
int A[50][50],B[f][c],C[f][c];
printf("Introducir la Dimension de la matriz: ");
scanf("%d",&n);
printf("\n");
for(f=1;f<=n;f++)
   {  for(c=1;c<=n;c++)
         {   B[f][c]=f*c;
             fac=1;
             x=f+c;
             for(i=1;i<=x;i++)
             {  fac=fac*i;
                A[f][c]=fac;
             }
                     }
   }
printf("\n\n");
for(f=1;f<=n;f++)
   {  for(c=1;c<=n;c++)
         {  printf("%d\t",A[f][c]);
         }
         printf("\n\n\n");
   }
for(f=1;f<=n;f++)
   {  for(c=1;c<=n;c++)
         {  printf("%d\t",B[f][c]);
         }
         printf("\n\n");
   }

printf("\n\n");
 printf("\n\nManuel Rodrigo Catari Calle \n");
system ("pause");

return 0;
}

