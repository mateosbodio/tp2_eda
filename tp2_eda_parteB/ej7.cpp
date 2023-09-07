/*Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta. */
#include <stdio.h>

int main() {
    int matriz[3][3];
    int numero, simetria;
    printf("Ingrese elementos de matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &numero);
            matriz[i][j] = numero;
        }
    }

    //para comprobar si es simetrica
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] != matriz[j][i]) 
                simetria = 0;
            simetria = 1;
        }
    }

    //imprimimos si es simetrica o no
    if (simetria == 1) {
        printf("La matriz es simetrica!\n");
        return 0;
    }
    printf("la matriz no es simetrica\n");
    return 0;
}