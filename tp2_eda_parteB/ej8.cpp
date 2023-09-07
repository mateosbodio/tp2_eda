/*Ejercicio 8: Se desea saber la temperatura media trimestral de 4 países. Para ello se tiene como dato las temperaturas medias mensuales de dichos países. - Se debe ingresar el nombre del país y seguidamente las tres temperaturas medias mensuales. Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
A. Cargar por teclado los nombres de los países y las temperaturas medias mensuales.
B. Imprimir los nombres de los países y las temperaturas medias mensuales de las mismas.
C. Calcular la temperatura media trimestral de cada país.
D. Imprimir los nombres de los países y las temperaturas medias trimestrales.
E. Imprimir el nombre de la provincia con la mayor temperatura media trimestral. */
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int Paises = 4;
    const int Meses = 3;

    string paises[Paises];
    double temperaturas[Paises][Meses];
    double temperaturasTrimestrales[Paises];

    // A. pasa por teclado los nombres de los países y las temperaturas medias mensuales.
    for (int i = 0; i < Paises; i++) {
        cout << "Ingrese el nombre del pais " << (i + 1) << ": ";
        cin >> paises[i];
        
        cout << "Ingrese las temperaturas medias mensuales para " << paises[i] << ":" << endl;
        for (int j = 0; j < Meses; j++) {
            cout << "Mes " << (j + 1) << ": ";
            cin >> temperaturas[i][j];
        }
    }

    // B. Imprimimos los nombres de los países y las temperaturas medias mensuales de las mismas.
    cout << "\nNombres de los paises y temperaturas medias mensuales:" << endl;
    for (int i = 0; i < Paises; i++) {
        cout << paises[i] << ": ";
        for (int j = 0; j < Meses; j++) {
            cout << temperaturas[i][j] << " ";
        }
        cout << endl;
    }

    // C. Calculamos la temperatura media trimestral de cada país.
    for (int i = 0; i < Paises; i++) {
        double tempTrimestral = 0;
        for (int j = 0; j < Meses; j++) {
            tempTrimestral += temperaturas[i][j];
        }
        temperaturasTrimestrales[i] = tempTrimestral / Meses;
    }

    // D. Imprimimos los nombres de los países y las temperaturas medias trimestrales.
    cout << "\nNombres de los países y temperaturas medias trimestrales:" << endl;
    for (int i = 0; i < Paises; i++) {
        cout << paises[i] << ": " << temperaturasTrimestrales[i] << endl;
    }

    // E. Encontramos el país con la mayor temperatura media trimestral.
    int MaxTemperatura = 0;
    double maxTemp = temperaturasTrimestrales[0];
    for (int i = 1; i < Paises; i++) {
        if (temperaturasTrimestrales[i] > maxTemp) {
            maxTemp = temperaturasTrimestrales[i];
            MaxTemperatura = i;
        }
    }

    cout << "\nEl pais con la mayor temperatura media trimestral es: " << paises[MaxTemperatura] << endl;

    return 0;
}