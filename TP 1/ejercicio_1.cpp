//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int hora, valor, sueldo;

    cout << "Por favor Ingrese las horas trabajadas" << endl;
    cin >> hora;

    cout << "Por favor ingrese el monto a pagar por hora trabajada" << endl;
    cin >> valor;

    sueldo = hora * valor;

    cout << "El total a cobrar es: " << sueldo << endl;



	return 0;
}
