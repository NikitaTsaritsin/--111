#include <iostream>
using namespace std;
/**
 * \brief Рассчитывает  сопротивление провода
 * \param p сопротивление
 * \param l длина провода
 * \param S площадь поперечного сечения
 */

void func(const double p, const double l, const double S){ 
    cout << "Удельное сопротивление = " << p*(l*1000/S) << endl << endl;
}

int main(){
/**
 * \brief табличное значение физической величины
 * \param p сопротивление Алюминия = (0.028 Ом*мм^2)/м
 */	
    const double p = 0.028; 
    double l, S;                                                
    cout << "Длина l(м) = "; cin >> l;                          
    cout << "Площадь поперечного сечения S(мм) = "; cin >> S; 

    /**
     * \brief Использование функий
     * \code
     void func(const double p, const double l, const double S){ 
    cout << "Удельное сопротивление = " << p*(l*1000/S) << endl << endl;
}
    * \endcode
    */
    func(p, l, S); 

    return 0;
}