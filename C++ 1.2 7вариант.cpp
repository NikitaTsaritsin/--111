#include <iostream>
#include <cmath>
using namespace std;

/**
 * \brief Рассчитывает третью сторону треугольника
 * \param a первая сторона
 * \param b вторая сторона
 * \param angle radian угол между двумя сторонами в радианах
 * \return третья сторона
 */
double sideOfATriangle(const double a, const double b, const double angle radian); // angle radian с англ. угол радианы
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

int main(){
    double a;                            
    cout << "Введите первую сторону a = "; 
    cin >> a; 
    double b:                  
    cout << "Введите вторую сторону b = "; 
    cin >> b;   
    double angle radian;               
    cout << "Ввеите угол между ними angle radian = ";
    cin >> angle radian;    
    cout << "a =" << a << " b =" << b << " c =" << sideOfATriangle(a, b, angle radian) << endl;                                      
    cout << "S =" << areaOfATriangle(a, b, sideOfATriangle(a, b, angle radian)) << endl;                                           
    cout << "R =" << radius(a, b, sideOfATriangle(a, b, angle radian), areaOfATriangle(a, b, sideOfATriangle(a, b, angle radian))) << endl;  

    return 0;
}

double sideOfATriangle(const double a, const double b, const double angle radian){
    return sqrt(pow(a,2) + pow(b,2) - 2 * a * b * cos(angle radian));
}

double areaOfATriangle(const double a, const double b, const double c){
    pp = (a + b + c) / 2;
    return sqrt(pp * (pp - a) * (pp - b) * (pp - c));
}

double radius(const double a, const double b, const double c, const double S){
    return (a * b * c) / (4 * S); //Формула нахождения радиуса описанной окружности треугольника зная 3 стороны и площадь.
}