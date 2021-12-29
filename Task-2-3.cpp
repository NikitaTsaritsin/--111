#include <iostream>
using namespace std;

/**
 * \brief Вычисление суммы 2х значений.
 * \param a Одномерный статический массив.
 * \return Значение суммы.
*/
void calc(const double a[]);

/**
 * \brief Определение положительности.
 * \param a Одномерный статический массив
 * \return true в случае если сумма положительна, false в случае, если отрицательна.
*/
bool func(const double a[]);

/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успеха.
*/
int main(){
    double a[3]; 
    for(int i = 0; i < 3; i++){ 
        cout << "Введите значение " << i + 1 << " - ";    
        cin >> a[i];                                    
    }

    calc(a); 
    cout << (func(a) ? "successfully" : "unsuccessfully");
    return 0;
}

void calc(const double a[]){ 
    cout << "S1 = " << a[0] + a[1] << endl; 
    cout << "S2 = " << a[0] + a[2] << endl; 
    cout << "S3 = " << a[1] + a[2] << endl; 
}

bool func(const double a[]){ 
    bool out = false; 
    if(a[0] + a[1] > 0){ out = !out; return out; } 
    if(a[0] + a[2] > 0){ out = !out; return out; } 
    if(a[1] + a[2] > 0){ out = !out; return out; } 
    return out; 
}