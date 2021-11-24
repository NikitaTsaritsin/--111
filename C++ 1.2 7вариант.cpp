#include <iostream>
#include <cmath>
using namespace std;

double sideOfATriangle(double a, b, gr) // c
    return sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(gr));

double areaOfATriangle(double a, b, c){ // S
    pp = (a+b+c)/2;
    return sqrt(pp*(pp-a)*(pp-b)*(pp-c));
}

double radius(double a, b, c, S) // R
    return (a*b*c)/(4*S);

void main(){
    double a, b, gr;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "Угол между ними = "; cin >> gr;
    
    cout << "a=" << a << " b=" << b << " c=" << sideOfATriangle(a, b, gr) << endl;
    cout << "S=" << areaOfATriangle(a, b, sideOfATriangle(a, b, gr)) << endl;
    cout << "R=" << radius(a, b, sideOfATriangle(a, b, gr), areaOfATriangle(a, b, sideOfATriangle(a, b, gr))) << endl;

    return 0;
}