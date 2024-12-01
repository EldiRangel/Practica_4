#include <iostream>
using namespace std;

struct Puntos {
    double x, y;
};

int Interseccion(const Puntos& inicio1, const Puntos& fin1, const Puntos& inicio2, const Puntos& fin2) {
    double pendiente1 = (fin1.y - inicio1.y) / (fin1.x - inicio1.x);
    double pendiente2 = (fin2.y - inicio2.y) / (fin2.x - inicio2.x);
     if (pendiente1 == pendiente2) {
        
        return 0;
    } else {
        double b1 = inicio1.y - pendiente1 * inicio1.x;
        double b2 = inicio2.y - pendiente2 * inicio2.x;
        double xInterseccion = (b2 - b1) / (pendiente1 - pendiente2);
        
        if ((xInterseccion >= min(inicio1.x, fin1.x) && xInterseccion <= max(inicio1.x, fin1.x)) &&
            (xInterseccion >= min(inicio2.x, fin2.x) && xInterseccion <= max(inicio2.x, fin2.x))) {
            return 1; 
        } else {
            return -1; 
        }
    }
}

int Interseccion(const Puntos& inicio1, const Puntos& fin1, const Puntos& inicio2, const Puntos& fin2, bool checkPerpendicular) {
    double pendiente1 = (fin1.y - inicio1.y) / (fin1.x - inicio1.x);
    double pendiente2 = (fin2.y - inicio2.y) / (fin2.x - inicio2.x);

  if (pendiente1 == pendiente2) {
        return 0; 
    } else if (pendiente1 * pendiente2 == -1) {
        return 1; 
    } else {
        return -1;
    }
}

int main() {
    Puntos inicio1, fin1, inicio2, fin2;

    
    cout << "introduce las coordenadas iniciales y finales:" << endl;
    cout << "x1 y y1: ";
    cin >> inicio1.x >> inicio1.y;
    cout << "x2 y y2: ";
    cin >> fin1.x >> fin1.y;
    
    cout << "introduce las segundas coordenadas iniciales y finales :" << endl;
    cout << "x3 y y3: ";
    cin >> inicio2.x >> inicio2.y;
    cout << "x4 y y4: ";
    cin >> fin2.x >> fin2.y;

    int resultado = Interseccion(inicio1, fin1, inicio2, fin2);
    cout << "Resultado de interseccion: " << resultado << endl;
    int resultadoPerpendicular = Interseccion(inicio1, fin1, inicio2, fin2, true);
    cout << "Resultado de perpendicularidad: " << resultadoPerpendicular << endl;

    return 0;
}
