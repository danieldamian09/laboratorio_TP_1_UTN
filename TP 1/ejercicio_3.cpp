//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int sueldo, cantidadPremio, montoPremio, premio, totalPagar;

    cout << "Por favor ingrese la cantidad de autos vendidos" << endl;
    cin >> cantidadPremio;

    sueldo = 15000;
    montoPremio = 2000;

    premio = cantidadPremio * montoPremio;

    totalPagar = sueldo + premio;


    cout << "El monto total a pagar es: " << totalPagar;






	return 0;
}
