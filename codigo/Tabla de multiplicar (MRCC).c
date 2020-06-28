#include<conio.h>
#include<stdio.h>
main()
{
       //variables
int x,y,z,i,n;
printf("Digite el valor de n= "); //escribir
scanf("%d",&n); //leer
printf("Digite el valor de x= "); //escribir
scanf("%d",&x); //leer
 printf("\n");
for(y=1;y<=n;y++)
{ z=x*y;
  printf("%d * %d = %d",x,y,z);
  printf("\n");
}
printf("\n\nManuel Rodrigo Catari Calle \n");
getch();
return(0);
}

