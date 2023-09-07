/*Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta. */
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int matriz[100][100],fico,cont=0;

    cout<<"Ingrese le numero de filas y columnas: "; cin>>fico;


    for(int i=0;i<fico;i++){
        for(int j=0;j<fico;j++){
            cout<<"Numero? ";
            cin>>matriz[i][j];
        }
    }

    for(int i=0;i<fico;i++){
        for(int j=0;j<fico;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<fico;i++){
        for(int j=0;j<fico;j++){
            if(matriz[i][j]==matriz[j][i]){
                    cont++;
            }
        }
    }

    if(cont==fico*fico){
        cout<<"Es correcto";
    }


    getch();
    return 0;
}