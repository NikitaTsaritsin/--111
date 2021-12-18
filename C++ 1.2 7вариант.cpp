#include <iostream>
#include <cmath>
using namespace std;

/**
 * \brief Рассчитывает третью сторону треугольника
 * \param a первая сторона
 * \param b вторая сторона
 * \param gr угол между двумя сторонами в радианах
 * \return третья сторона
 */

double sideOfATriangle(const double a, const double b, const double gr);
/**
 * \brief Вычисляет площадь треугольника
 * \param a первая сторона
 * \param b вторая сторона
 * \param c третья сторона
 * \return площадь треугольника
 */

double areaOfATriangle(const double a, const double b, const double c);
/**
 * \brief Вычисляет радиус описанной окружности
 * \param a первая сторона
 * \param b вторая сторона
 * \param c третья сторона
 * \param S площадь треугольника
 * \return радиус описанной окружности
 */
double radius(const double a, const double b, const double c, const double S);

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

double sideOfATriangle(const double a, const double b, const double gr){
    return sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(gr));
}

double areaOfATriangle(const double a, const double b, const double c){
    pp = (a+b+c)/2;
    return sqrt(pp*(pp-a)*(pp-b)*(pp-c));
}

double radius(const double a, const double b, const double c, const double S){
    return (a*b*c)/(4*S);
}