//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){
    float semanaA, semanaB, semanaC, semanaD, totalRecaudacion, recaudacionPromedio;
    float porcentajeA, porcentajeB, porcentajeC, porcentajeD;

    cout << "Por favor ingrese el monto de la recaudacion de la primera semana" << endl;
    cin >> semanaA;

    cout << "Por favor ingrese el monto de la recaudacion de la segunda semana" << endl;
    cin >> semanaB;

    cout << "Por favor ingrese el monto de la recaudacion de la tercera semana" << endl;
    cin >> semanaC;

    cout << "Por favor ingrese el monto de la recaudacion de la cuarta semana" << endl;
    cin >> semanaD;

    totalRecaudacion = semanaA + semanaB + semanaC + semanaD;

    recaudacionPromedio = totalRecaudacion / 4;

    porcentajeA = semanaA * 100 / totalRecaudacion;
    porcentajeB = semanaB * 100 / totalRecaudacion;
    porcentajeC = semanaC * 100 / totalRecaudacion;
    porcentajeD = semanaD * 100 / totalRecaudacion;

    cout << "El monto promedio de la recaudacion es: " << recaudacionPromedio << endl;

    cout << "El porcentaje correspondiente a la primera semana es: " << porcentajeA << endl;
    cout << "El porcentaje correspondiente a la segunda semana es: " << porcentajeB << endl;
    cout << "El porcentaje correspondiente a la tercera semana es: " << porcentajeC << endl;
    cout << "El porcentaje correspondiente a la cuarta semana es: " << porcentajeD << endl;



	return 0;
}
