#include <iostream>
using namespace std;

void func(const double p, const double l, const double S){ 
    cout << "Удельное сопротивление = " << p*(l*1000/S) << endl << endl;
}

int main(){
    const double p = 0.028; 
    double l, S;                                                
    cout << "Длина l(м) = "; cin >> l;                          
    cout << "Площадь поперечного сечения S(мм) = "; cin >> S;   
    func(p, l, S); 

    return 0;
}