/*Ejercicio 6: Escribe un programa que defina un vector de números y calcule si existe algún número en el vector cuyo valor equivale a la suma del resto de números del vector.*/
#include<iostream> 
#include<conio.h> 
using namespace std; 
int main(){ 
    int numeros[5] ={1,2,3,4,5}; 
    int suma=0; 
    for(int i=0;i<5;i++){ 
        suma += numeros[i]; 
       
        } 
        cout<<"La suma de los elementos del arreglo es: "<<suma<<endl; 
getch(); 
return 0; 
}