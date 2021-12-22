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
void oneMultiplication(double a, double n);
/**
 * \brief функция, меняющая переменные вторым вариантом.
 * \param a - константа, вводимая пользователем
 * \param n - константа, вводимая пользователем
  */
void twoMultiplication(double a, double n);
/**
 * \brief функция, меняющая переменные третьим вариантом.
 * \param a - константа, вводимая пользователем
 * \param n - константа, вводимая пользователем
  */
void threeMultiplication(double a, double n);

/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успеха.
 */
int main() 
{
    setlocale(LC_ALL, "Russian");
    double a, n; int score;
    cout << "Введите число A: "; cin >> a;
    cout << "Введите число N: "; cin >> n;
    cout << "Введите кол-во операций (1-3): "; cin >> score;

    switch (score - 1) {
    case static_cast<int>(Operation::Case1): {
        oneMultiplication(a, n);
        break;
    }
    case static_cast<int>(Operation::Case2): {
        twoMultiplication(a, n);
        break;
    }
    case static_cast<int>(Operation::Case3): {
        threeMultiplication(a, n);
        break;
    }
    default:
        cout << "Ошибка";
    }
    cout << "Результат " << n << " операций: " << a << endl;

    return 0;
}

void oneMultiplication(double a, double n) {
    a = a * n;
}

void twoMultiplication(double a, double n) {
    a = a * (2 * n);
}

void threeMultiplication(double a, double n) {
    a = a * (3 * n);
}