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

int obtenerNumeroLlamadas() {
    return contadorLlamadas;
}

int main() {
    char opcion;

    do {
        proceso();

        cout << "¿Desea ingresar otra persona? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    int numLlamadas = obtenerNumeroLlamadas();
    cout << "La funcion se ha llamado " << numLlamadas << " veces." << endl;

    return 0;
}

