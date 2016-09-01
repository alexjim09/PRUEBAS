//DETERMINA LA SUMA DE TODOS LOS IMPARAES DEL 1-100
#include<stdio.h>
#include<conio.h>

main()
{
  int suma=0,i,residuo;
  char nom[20];
  
  printf("Buen día, suma número impares");
  printf("\nREGISTRATE");
  gets(nom);
  
  for(i=1; i<=100; i++)
  {
  	residuo=i%2;
  	if(residuo!=0)
  	 {
	  printf("%d \t", i);
	  suma=suma+i;
       }
  }	
 printf("\n\nGracias por visitarnos: %s", nom);
 printf("\n La suma de los número impares es: %d",suma);
 getche();	
}
