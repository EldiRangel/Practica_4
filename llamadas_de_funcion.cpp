#include <iostream>
#include <string>
using namespace std;

int contadorLlamadas = 0;

struct Persona {
    string nombre;
    string apellido;
    string cedula;
    string genero;
};

void proceso() {
    contadorLlamadas++;

    Persona p;
    cout << "Ingrese el nombre: ";
    cin >> p.nombre;
    cout << "Ingrese el apellido: ";
    cin >> p.apellido;
    cout << "Ingrese la cédula: ";
    cin >> p.cedula;
    cout << "Ingrese el género (hombre/mujer): ";
    cin >> p.genero;

    cout << "Persona ingresada: " << p.nombre << " " << p.apellido << ", Cédula: " << p.cedula << ", Género: " << p.genero << endl;
}
