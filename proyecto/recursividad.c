#include <stdio.h>

void decimalABinario(int n) {
    if (n == 0){
        return;
    }
    decimalABinario(n/2);//Llamada recursiva dividiendo
    printf("%d", n % 2);//Imprimir el residuo
}

int main (){
    int num;

    do{
        printf("Introduce un numero positivo: ");
        scanf("%d", &num);

        if(num < 1){
            printf("El numero debe de ser positivo. Intentelo de nuevo.\n");
        }
    } while (num < 1);

    printf("La representacion binaria de %d es: ", num);
    if (num == 1){
        printf("0");
    } else {
        decimalABinario(num);
    }
    
    printf("\n");

    return 0;
}