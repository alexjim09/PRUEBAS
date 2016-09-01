//DETERMINA EL PROMEDIO DE 7 CALIFCACIONES
#include<stdio.h>
#include<conio.h>

main()
{
  int suma=0,i, PROM, calf;
  char nom[20];
  
  printf("Promedios finales");
  printf("\nREGISTRATE");
  gets(nom);
  
  for(i=1; i<=7; i++)
  {
  	printf("Ingresa la calf%d  ",i);
  	scanf("%d",&calf);
  	
  	suma=suma+calf;
  }	
 
 PROM=suma/7;
 printf("\n\nGracias por visitarnos: %s", nom);
 printf("\n El promedio es %d ",PROM);
 getche();	
}
