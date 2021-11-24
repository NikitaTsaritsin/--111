#include <iostream>
using namespace std;

double input(){
    double l, S;
    cout << "Длина l(м) = "; cin >> l;
    cout << "Площадь поперечного сечения S(мм) = "; cin >> S;
    return l, S;
} 

void func(double p){
    double l, S = input();
    cout << "Удельное сопротивление = " << p*(l*1000/S) << endl << endl;
}

int main(){
    const double p = 0.028;
    func(p);

    return 0;
}
