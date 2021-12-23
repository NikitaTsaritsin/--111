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
 \param square площадь поперечного сечения
 \return Рассчитаем сопротивление провода
 */
double getresistance(const double p, const double length, const double square);

/**
\brief Точка входа в программу
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
    double square;
    cin >> square;

    const double resistance = getresistance(p, length, square);
    cout << "\n Сопротивление =  " << resistance << endl;
    return 0;
}


double getresistance(const double p, const double length, const double square)
{
    return length * p / square;
}