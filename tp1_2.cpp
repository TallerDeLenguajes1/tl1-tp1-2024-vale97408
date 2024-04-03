#include <stdio.h>

// Declaracion de funciones
int Cuadrado(int num);
void CuadradoVoid(int num);
void MostrarDireccionContenido(int *puntero);
void Invertir(int *a, int *b);
void Orden(int *a, int *b) ;

// Programa principal
int main() {

      int num1, num2;
      int bandera=1;

    // Leer pares de valores e imprimirlos por pantalla
    while (bandera==1) {
        printf("-----Ingrese dos números---- \n ");
        printf("Ingrese el primer numero (o 0 para salir): \n  ");
        scanf("%d", & num1);
        printf("Ingrese el segundo numero (o 0 para salir):  \n ");
        scanf("%d", & num2);

    

        if (num1 == 0 && num2 == 0) {
            bandera=0;
        }

        // Mostrar los valores ingresados
        printf("Valores ingresados: %d %d\n", num1, num2);

        // Calcular y mostrar el cuadrado de num1
        printf("Cuadrado de num1: %d\n", Cuadrado(num1));

        // Mostrar dirección y contenido de num2
        MostrarDireccionContenido(&num2);

        // Intercambiar los valores de num1 y num2
        Invertir(&num1, &num2);
        printf("Valores invertidos: %d %d\n", num1, num2);

        // Ordenar los valores de forma ascendente
        Orden(&num1, &num2);
        printf("Valores ordenados: %d %d\n", num1, num2);
    }


    return 0;
}

// Desarrollo de funciones


// Función que devuelve el cuadrado de un número
int Cuadrado(int num) {
    int cuadrado;
    cuadrado= num*num;
    return cuadrado;
}

// Función que imprime el cuadrado de un número tipo void
void CuadradoVoid(int num) {
    int resultado; 
     resultado = num * num;
    printf("El cuadrado de %d es %d\n", num, resultado);
}

// Función que muestra la dirección y el contenido de una variable
void MostrarDireccionContenido(int *puntero) {
    printf("Dirección de la variable Num2: %p\n", puntero);
    printf("Contenido de la variable Num2: %d\n", *puntero);
}

// Función que invierte los valores entre dos variables
void Invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

// Función que devuelve los parámetros de entrada ordenados
void Orden(int *a, int *b) {
    if (*a > *b) {
        Invertir(a, b);
    }
}