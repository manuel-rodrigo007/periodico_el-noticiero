#include <stdio.h>
#include <conio.h>
main()
{ int c=0, i=1, p=0, n, A[50];
printf("Introducir el valor de N = ");
scanf("%d",&n);
p=n;
for(c=1;c<=n*2;c++)
  { if(c%2==0)
       { A[c]=p;
         p++;
       }
       else
       { A[c]=i;
         i++;
       }}
for(c=1;c<=n*2;c++)
    printf("%d ",A[c]);
    printf("\n\nManuel Rodrigo Catari Calle \n");
  getch();
  return 0;
}

