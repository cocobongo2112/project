#include <stdio.h>// Definición de la función suma
int suma(int a, int b){
    return a + b;
}

int main(){
    int resultado = suma(5, 3);
    printf("La suma de 5 y 3 es: %d", resultado);
    return 0;
}