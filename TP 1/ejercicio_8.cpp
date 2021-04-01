//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int importeSinDescuento, importeConDescuento, porcentajeDelTotal, porcentajeDescuento;

    cout << "Por favor ingrese el importe de la venta sin el descuento" << endl;
    cin >> importeSinDescuento;

    cout << "Por favor ingrese el importe de la venta con el descuento" << endl;
    cin >> importeConDescuento;

    porcentajeDelTotal = importeConDescuento * 100 / importeSinDescuento;

    porcentajeDescuento = 100 - porcentajeDelTotal;

    cout << "EL porcentaje de la venta aplicado es de: " << porcentajeDescuento;


	return 0;
}
