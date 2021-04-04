//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int horas, diasEquivalentes, horasEquivalentes;

    cout << "Por favor ingrese la cantidad de horas" << endl;
    cin >> horas;

    diasEquivalentes = horas / 24;
    horasEquivalentes = horas % 24;

    cout << "La cantidad de dias equivalentes es de: " << diasEquivalentes << endl;

    cout << "LA cantidad de horas equivalentes que restan es de: " << horasEquivalentes;


	return 0;
}
