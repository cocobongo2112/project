#include <stdio.h>// Definición de la función suma
int suma(int a, int b){
    return a + b;
}

int cuadrado(int x){
    return x * x;
}

void imprimirMensaje(){
    printf("Hola, esta es una funcion que no hace nada.\n");
}

int main(){
    int resultado = suma(5, 3);
    printf("La suma de 5 y 3 es: %d\n", resultado);

    int num = 4;
    resultado = cuadrado(num);
    printf("El cuadrado de %d es: %d\n", num, resultado);

    imprimirMensaje();
}