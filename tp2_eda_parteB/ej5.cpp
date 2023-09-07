/*Ejercicio 5: Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz traspuesta es aquella en la que su ‘columna i’ era, la ‘fila i’ de la matriz en su forma original.*/
#include <iostream>
int main(){
    int matrizA[3][3],matrizB[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<"Humano ingresa los datos de la matriz en la pocicion ["<<i+1<<"]["<<j+1<<"]: ";
            std::cin>>matrizA[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizB[i][j]=matrizA[j][i];
        }
    }
    std::cout<<"\nMATRIZ A\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<matrizA[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n\nMATRIZ B\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<matrizB[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    system("pause");
    return 0;
} 