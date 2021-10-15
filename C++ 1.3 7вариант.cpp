#include <iostream>
using namespace std;

void main(){
    double p = 0.028;
    double l, S;
    cout << "Длина l(м) = "; cin >> l;
    cout << "Площадь поперечного сечения S(мм) = "; cin >> S;
    
    cout << "Удельное сопротивление = " << p*(l*1000/S) << endl << endl;

    return 0;
}