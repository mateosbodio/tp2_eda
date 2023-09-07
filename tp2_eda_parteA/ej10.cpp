/*Ejercicio 10: Dado un arreglo V de tamaño 20 con números enteros. Deje en un vector A todos los números negativos y en un vector B el doble de los positivos.*/
#include<iostream>
#define TAMANIO 20
using namespace std;

int main(){

    int vectorA[TAMANIO]; //Tamaño original
    int vectorB[TAMANIO];//Vector para los numeros negativos
    int vectorDoble[TAMANIO]; //Vector para los dobles de los positivos
    int contadorA= 0; //Contador del vectorA
    int contadorB= 0;//Contador del vectorB
    cout<<"Ingrese 20 numeros positivos: "<<endl;
    for(int i= 0; i<TAMANIO;i++){
        cin>>vectorA[i]; //Cargamos el vectorA con 20 numeros
    }

    for(int i= 0; i<TAMANIO;i++){
        if( vectorA[i]<0){
            vectorB[contadorA] = vectorA[i];
            contadorA++;
        }else{
            vectorDoble[contadorB] = vectorA[i]*2;
            contadorB++;
        }
    }

    cout<<" los numeros negativos del vector  son: "<<endl;

        for (int i = 0; i < contadorA; i++) {
        cout << vectorB[i] << " ";
        }
        cout << endl;

        cout << "El doble de los numeros positivos en B: ";
        for (int i = 0; i < contadorB; i++) {
            cout << vectorDoble[i] << " ";
        }
        cout << endl;

    return 0;
    }