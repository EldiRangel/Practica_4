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
}
