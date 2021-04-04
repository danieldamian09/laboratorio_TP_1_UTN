//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int cantidadVendida, docenaPrecio, sueltoPrecio, totalPagar;

    cout << "Por favor ingrese la cantidad de huevos vendidos" << endl;
    cin >> cantidadVendida;

    docenaPrecio = (cantidadVendida / 12) * 100;
    sueltoPrecio = (cantidadVendida % 12) * 12;
    totalPagar = docenaPrecio + sueltoPrecio;

    cout << "El total a pagar es de: " << totalPagar;



	return 0;
}
