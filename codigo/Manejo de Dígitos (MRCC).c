#include <conio.h>
#include <stdio.h>
#include <math.h>
main()
{ int dig=0,dp=0, di=0, NN=0,c=0, N;
  printf("Introducir el valor de N = ");
  scanf("%d",&N);

  while(N!=0)
    { dig=N%10;
       if (dig%2==0)
         { dp=(dp*10)+dig;
		 }
		 else
		 { di=di*10+dig;
		   c++;
		 }
		 N=N/10;
	}
	printf("\nLos digitos pares es dp = %d",dp);
	dp=dp*pow(10,c);
	NN=dp+di;
	printf("\nLos digitos impares es di = %d",di);
	printf("\nEl nuevo numero es NN = %d",NN);

	printf("\n\nManuel Rodrigo Catari Calle ");
	getch();
	return(0);
}


