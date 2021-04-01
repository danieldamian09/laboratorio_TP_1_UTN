//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int minutos, horasEquivalentes, minutosEquivalentes;

    cout << "Por favor ingrese la cantidad de minutos: " << endl;
    cin >> minutos;

    horasEquivalentes = minutos / 60;

    minutosEquivalentes = minutos % 60;

    cout << "La cantidad de horas es: " << horasEquivalentes << endl;

    cout << "La cantidad de minutos es: " << minutosEquivalentes << endl;


	return 0;
}
