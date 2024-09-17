#include <stdio.h>

// Función recursiva para resolver Torres de Hanoi
void TorresDeHanoi(int n, char origen, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 de %c a %c\n", origen, destino);
        return;
    }
    TorresDeHanoi(n - 1, origen, auxiliar, destino);
    printf("Mover disco %d de %c a %c\n", n, origen, destino);
    TorresDeHanoi(n - 1, auxiliar, destino, origen);
}

int main() {
    int numDiscos;
    printf("Ingrese el numero de discos: ");
    scanf("%d", &numDiscos);
    TorresDeHanoi(numDiscos, 'A', 'C', 'B');
    return 0;
}
