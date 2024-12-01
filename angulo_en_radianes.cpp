#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415;

struct Punto {
    double x;
    double y;
};

double calcularAngulo(const Punto& a, const Punto& b, const Punto& c, bool enGrados = false) {
   
    double abx = b.x - a.x;
    double aby = b.y - a.y;
    double bcx = c.x - b.x;
    double bcy = c.y - b.y;

      double productoPunto = abx * bcx + aby * bcy;

    double magnitudAB = sqrt(abx * abx + aby * aby);
    double magnitudBC = sqrt(bcx * bcx + bcy * bcy);

    double angulo = acos(productoPunto / (magnitudAB * magnitudBC));

    if (enGrados) {
        angulo = angulo * (180.0 / PI);
    }

    return angulo;
}

int main() {
    Punto a, b, c;
    char opcion;

    cout << "Ingrese las coordenadas del punto A (x y): ";
    cin >> a.x >> a.y;
    cout << "Ingrese las coordenadas del punto B (x y): ";
    cin >> b.x >> b.y;
    cout << "Ingrese las coordenadas del punto C (x y): ";
    cin >> c.x >> c.y;

    double anguloRadianes = calcularAngulo(a, b, c);
    double anguloGrados = calcularAngulo(a, b, c, true);

    cout << "Angulo en radianes: " << anguloRadianes << endl;
    cout << "¿Desea convertir el ángulo a grados? (s/n): ";
    cin >> opcion;

    if (opcion == 's' || opcion == 'S') {
        cout << "Angulo en grados: " << anguloGrados << endl;
    }

    return 0;
}
