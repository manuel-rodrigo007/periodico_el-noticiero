
#include <conio.h>
#include <stdio.h>
main()

{ int dig=0, c=0, f=1, N;

  printf("Introducir el valor de N = ");
  scanf("%d",&N);
  while(N!=0)
  { dig=N%10;
    printf("%d : ",dig);
    for(c=1;c<=dig;c++)
       { printf("%d ",c);
         f=f*c;
	   }
	   printf("= %d",f);
	   f=1;
	   N=N/10;
	   printf("\n");
  }
    printf("\n\nManuel Rodrigo Catari Calle ");
	getch();
	return(0);
}
