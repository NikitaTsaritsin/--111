#include <iostream>
using namespace std;

/**
 * \brief Рассчитывает значение рекуррентного члена в зависимости от индекса (\a index).
 * \param index Индекс, номер итерации.
 * \return Значение текущего элемента последовательности.
 */
double getCurrent(const int index);

/**
 * \brief Рассчитывает значение факториала числа посредством рекурсии (\a i).
 * \param i Текущий элемент факториала.
 * \return Значение факториала исходного числа.
 */
double factorial(const double i);

/**
 * \brief Точка входа в программу.
 * \return 0 – в случае успеха,<br/>1 – в противном случае.
 */
int main(){
    try{
        int size; cout << "Введите количество элементов последовательности: ";
        cin >> size;
        if (size < 1)
            throw invalid_argument("Значение должно быть больше 0!");
        double summ = 0;
        for (int i = 1; i < size; i++)
            summ += getCurrent(i);
        cout << "Сумма последовательности из " << size << " элементов равна: " << summ << endl;
        return 0;
    }
    catch (const exception& e){
        cout << "Ошибка!";
        return 1;
    }
}

double getCurrent(const int index){
    return index / factorial(index+1);
}

double factorial(const double i){
    if (i==0) return 1;
    else return i*factorial(i-1);
}