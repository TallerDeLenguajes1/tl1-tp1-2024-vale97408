#include<stdio.h>

int main() 
{
  printf("Hola mundo\n");

  int variable=5;
  int *puntero;
  puntero= &variable;

  // Contenido del puntero
  printf("Contenido del puntero: %d \n", *puntero);

  // Dirección de memoria almacenada en el puntero
  printf("Dirección de memoria almacenada en el puntero: %p \n", puntero);

 // Dirección de memoria de la variable
  printf("Dirección de memoria de la variable: %p \n", &variable);

 // Dirección de memoria del puntero 
  printf("Dirección de memoria del puntero: %p \n", &puntero);

 // el tamaño de memoria utilizado por esa variable usando la función sizeof()
  printf("El tamaño de memoria utilizado por esa variable usando la función sizeof(): %zu bytes \n", sizeof(variable) );




    return 0;
}