
#include <stdio.h>
#include <conio.h>
main()
{
    printf ("SERIE DE FIBONACI \n");
    int x,y,z,num,cont;
    x=0;
    y=1;
    z=1;
    printf("Digite el numero de elementos de la serie:");
    scanf("%i",&num);
    printf ("1 ,");
    for(cont=1;cont<num;cont++)
    {
        z=x+y;
        x=y;
        y=z;
        printf ("%i ,",z);
    }


    printf("\n\nManuel Rodrigo Catari Calle \n");
     printf("\n\n creacion propia, por repeticion de codigo del ejercicio anterior \n");
  getch();
  return 0;
}

