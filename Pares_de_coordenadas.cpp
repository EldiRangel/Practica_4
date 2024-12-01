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
    } 
