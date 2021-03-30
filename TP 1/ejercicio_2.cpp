//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int n1, n2, numeroAuxiliar;

    cout << "Ingrese un numero" << endl;
    cin >> n1;

    cout << "Ingrese otro numero" << endl;
    cin >> n2;

    numeroAuxiliar = n1;
    n1 = n2;

    cout << "el numero cambiado 1 es: " << n1 << endl;
    cout << "el numero cambiado 2 es: " << numeroAuxiliar;


	return 0;
}
