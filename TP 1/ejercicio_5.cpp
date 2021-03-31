//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    float cantidadTotal, cantidadA, cantidadB, cantidadC;
    float porcentajeA, porcentajeB, porcentajeC;

    cout << "Por favor ingrese la cantidad de Alfajores vendidos de la marca A " << endl;
    cin >> cantidadA;

    cout << "Por favor ingrese la cantidad de Alfajores vendidos de la marca B " << endl;
    cin >> cantidadB;

    cout << "Por favor ingrese la cantidad de Alfajores vendidos de la marca B " << endl;
    cin >> cantidadC;

    cantidadTotal = cantidadA + cantidadB + cantidadC;

    porcentajeA = cantidadA * 100 / cantidadTotal;
    porcentajeB = cantidadB * 100 / cantidadTotal;
    porcentajeC = cantidadC * 100 / cantidadTotal;


    cout << "El porcentaje vendido de la marca A es: " << porcentajeA << endl;
    cout << "El porcentaje vendido de la marca A es: " << porcentajeB << endl;
    cout << "El porcentaje vendido de la marca A es: " << porcentajeC << endl;


	return 0;
}
