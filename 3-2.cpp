#include <iostream>
using namespace std;

/**
 * \brief Рассчитывает значение рекуррентного члена в зависимости от индекса (\a index).
 * \param index Индекс, номер итерации.
 * \return Значение текущего элемента последовательности.
 */
double getCurrent(const int index);

/**
 * \brief Точка входа в программу.
 * \return 0 – в случае успеха,<br/>1 – в противном случае.
 */
int main(){
    try{
        int index = 1;
        int size; 
        cout << "Введите количество элементов последовательности: ";
        cin >> size;
        if (size < 1)
            throw invalid_argument("Значение должно быть больше 0!");
        double summ = 0.0;
        for (int i = 0; i < size; i++)
            summ += getCurrent(index);
            index++;
        cout << "Сумма последовательности из " << size << " элементов равна: " << summ << endl;
        return 0;
    }
    catch (const exception& e){
        cout << "Ошибка!";
        return 1;
    }
}

double getCurrent(const int index){
    return index / (index + 2);
}