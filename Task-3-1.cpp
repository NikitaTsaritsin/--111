#include <iostream>
#include <cmath>
using namespace std;

/**
 * \brief Расчёт значения y.
 * \param x Аргумент функции.
 */
void output(const double x);

/**
 * \brief Табулирование функции.
 * \param x Аргумент функции.
 * \param border Максимальное значение аргумента.
 */
void func(double x, const double border, const double s);

/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успеха.
 */
int main(){
    const double x = 0;         
    const double border = 1;        
    const double step = 0.1;    

    func(x,border,step); 

    return 0;
}

void output(const double x){
    try{ 
        double y;
        y = sqrt(1 - x) - cos(sqrt(1 - x)); 
        cout << "x = " << x << "\t\ty = " << y << endl; 
    } catch (exception& e){ 
        cout << "Решения нет!" << endl;
    }
}

void func(double x, const double border, const double s){
    while (x != (border + s)-1){    
        if (x <= border){           
            output(x);          
            x += s;             
        }
    }
}