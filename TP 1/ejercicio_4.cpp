//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int totalAsientos, asientosOcupados, porcentajeOcupacion, noOcupacionPorcentaje;

    cout << "Por favor ingrese el total de asientos" << endl;
    cin >> totalAsientos;

    cout << "Por favor ingrese el total de asientos ocupados" << endl;
    cin >> asientosOcupados;



    porcentajeOcupacion = asientosOcupados * 100 / totalAsientos;

    noOcupacionPorcentaje = 100 - porcentajeOcupacion;

    cout << "El porcentaje de asientos ocupados es de: " << porcentajeOcupacion << endl;

    cout << "El porcentaje de no ocupacion es de: " << noOcupacionPorcentaje;



	return 0;
}
