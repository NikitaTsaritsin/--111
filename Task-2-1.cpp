#include <iostream>
#include <string>

using namespace std;

/**
 * \brief Константы вариантов решения.
 */
enum class Operation
{
    /**
     * \brief Первый вариант решения
     */
    Case1,

    /**
     * \brief Второй вариант решения
     */
    Case2,

    /**
     * \brief Третий вариант решения
     */
    Case3,
};

/**
 * \brief функция, меняющая переменные первым вариантом.
 * \param a - константа, вводимая пользователем
 * \param n - константа, вводимая пользователем
  */
double oneMultiplication(double a, double n);
/**
 * \brief функция, меняющая переменные вторым вариантом.
 * \param a - константа, вводимая пользователем
 * \param n - константа, вводимая пользователем
  */
double twoMultiplication(double a, double n);
/**
 * \brief функция, меняющая переменные третьим вариантом.
 * \param a - константа, вводимая пользователем
 * \param n - константа, вводимая пользователем
  */
double threeMultiplication(double a, double n);

/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успеха.
 */
int main() 
{
    setlocale(LC_ALL, "Russian");
    double a;
    cout << "Введите число A: ";
    cin >> a;
    double n;
    cout << "Введите число N: "; 
    cin >> n;
    cout << "Выберите операцию:" << endl;
    cout << " " << static_cast<int>(Operation::Case1) << ") a = a * n" << endl;
    cout << " " << static_cast<int>(Operation::Case2) << ") a = a * (2 * n)" << endl;
    cout << " " << static_cast<int>(Operation::Case3) << ") a = a * (3 * n)" << endl;
    int score; 
    cin >> score;

    switch (score) {
    case static_cast<int>(Operation::Case1): {
        a = oneMultiplication(a, n);
        break;
    }
    case static_cast<int>(Operation::Case2): {
        a = twoMultiplication(a, n);
        break;
    }
    case static_cast<int>(Operation::Case3): {
        a = threeMultiplication(a, n);
        break;
    }
    default:
        cout << "Ошибка";
    }
    cout << "Результат " << n << " операций: " << a << endl;

    return 0;
}

double oneMultiplication(double a, double n) {
    return a = a * n;
}

double twoMultiplication(double a, double n) {
    return a = a * (2 * n);
}

double threeMultiplication(double a, double n) {
    return a = a * (3 * n);
}