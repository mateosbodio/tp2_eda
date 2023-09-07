/*Ejercicio 3: Hacer una matriz M1 de tipo entera de 2 * 2, llenarla de números y luego copiar todo el contenido de M1 hacia otra matriz M2, sumándole 1 a cada elemento de M1 al copiarlo. */
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    //pasando contenido
    int numeros[2][2]={{1,2},{3,4}};
    int matriz[2][2];
    for(int i=0 ;i < 2;++i){
        for (int j = 0;j < 2;++j) {
            matriz[i][j]= numeros[i][j];
        }
    }
   //mostrando matriz
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<matriz[i][j]+1;
        }
        cout<<"\n";
    }

    getch();
    return 0;

}