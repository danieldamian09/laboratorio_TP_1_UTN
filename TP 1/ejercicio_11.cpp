//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int minutos, diasEquivalentes, horasEquivalentes, minutosEquivalentes;

    cout << "Por favor ingrese el total de minutos" << endl;
    cin >> minutos;

    diasEquivalentes = minutos / 1440;
    horasEquivalentes = (minutos % 1440) / 60;
    minutosEquivalentes = (minutos % 1440) % 60;

    cout << "La cantidad de dias equivalentes es de: " << diasEquivalentes << endl;
    cout << "La cantidad de horas equivalentes es de: " << horasEquivalentes << endl;
    cout << "La cantidad de minutos restante es de: " << minutosEquivalentes;


	return 0;
}
