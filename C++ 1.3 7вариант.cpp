#define USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <locale>
#include <string>

using namespace std;
/**
 \brief Рассчитывает сопротивление провода
 \param p сопротивление
 \param length длина провода
 \param Square площадь поперечного сечения
 \return Рассчитаем сопротивление провода
 */
double getresistance(const double p, const double length, const double Square);

/**
\brief Точка входа в программу
\param p сопротивление Алюминия = (0.028 Ом*мм^2)/м
\return В случае успеха возвращаем 0
*/
int main()
{
    setlocale(LC_ALL, "Russian");
    const double p = 0.028;
    cout << "Введите длину провода = ";
    double length;
    cin >> length;

    cout << "Введите площадь поперечного сечения = ";
    double Square;
    cin >> Square;

    const double resistance = getresistance(p, length, Square);
    cout << "\n Сопротивление =  " << resistance << endl;
    return 0;
}


double getresistance(const double p, const double length, const double Square)
{
    return length * p / Square;
}