#include<conio.h>
#include<stdio.h>
main()
{
int n,c,i;
printf("Digite el valor de n = "); //escribir
scanf("%d",&n); //leer
int nc=n;
for(i=1;i<=n*2;i++)
  { if (i%2==0)
       { printf("%d ",nc);
         nc=nc-1;
       }
       else
       { printf("%d ",i);
         i++;
       }
  }
  printf("\n\nManuel Rodrigo Catari Calle \n");
getch();
return(0);
}
