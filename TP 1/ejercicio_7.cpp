//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    float importeVenta, descuento, totalPagar, porcentajeDescuento;

    cout << "Por favor ingrese el importe de la venta: " << endl;
    cin >> importeVenta;

    cout << "Por favor ingrese el porcentaje de descuento: " << endl;
    cin >> descuento;

    porcentajeDescuento = (100 - descuento) / 100;

    totalPagar = importeVenta * porcentajeDescuento;

    cout << "El total a pagar es: " << totalPagar << endl;



	return 0;
}
