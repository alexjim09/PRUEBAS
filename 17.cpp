/* Este programa determina los números pares que hay del 1 al 100 e imprime dichos números
 y nombre del usuario*/

#include<stdio.h>
#include<conio.h>

main()
{
  int numero, residuo, i;
  char nombre[30];
  printf("\nIngrese su nombre: _ ");
  gets(nombre);
  
  for(i=1; i<=20; i++)
  {
    residuo=i%2;
    if(residuo==0)
      printf("%d \n", i);
  }
   
  printf("\n\nGracias por visitarnos: %s", nombre);
  
  getche();
}
