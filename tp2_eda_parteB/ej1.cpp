/*
Se tiene la siguiente información: · Nombres de 4 empleados. · Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses.
Confeccionar el programa para:
a) Realizar la carga de la información mencionada.
b) Generar un arreglo que contenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.
c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int empleados = 4;
    const int meses = 3;
    string nombres[empleados];
    double sueldos[empleados][meses];
    double inacumulado[empleados] = {0}; // Inicializar en 0

    cout << "Ingrese la informacion de los empleados:" << endl;

    // a)  carga la información 
    for (int i = 0; i < empleados; i++) {
        cout << "Empleado " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> nombres[i];

        for (int j = 0; j < meses; j++) {
            cout << "Ingrese el sueldo del mes " << j + 1 << ": ";
            cin >> sueldos[i][j];
            inacumulado[i] += sueldos[i][j]; // b) Calcular el ingreso 
        }
    }

    // c) Mostramos por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
    double totalPagado = 0;
    for (int i = 0; i < empleados; i++) {
        totalPagado += inacumulado[i];
    }

    cout << "El total pagado en sueldos a todos los empleados en los ultimos 3 meses es: " << totalPagado << endl;

    // d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado
    double maxIngresoAcumulado = inacumulado[0];
    string empleadoConMayorIngreso = nombres[0];

    for (int i = 1; i < empleados; i++) {
        if (inacumulado[i] > maxIngresoAcumulado) {
            maxIngresoAcumulado = inacumulado[i];
            empleadoConMayorIngreso = nombres[i];
        }
    }

    cout << "El empleado con el mayor ingreso acumulado es: " << empleadoConMayorIngreso << endl;

    return 0;
}