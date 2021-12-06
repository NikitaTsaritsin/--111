#include <iostream>
#include <cmath>
using namespace std;

double first(const double a, const double x){
    return a - log10(a*x);
}
double second(const double a, const double x){
    return a + log10(a*x);
}

double output(const double a, const double x, const int f){
    double out = (f==0 ? first(a,x) : second(a,x));
    return out;
}
int func(const double a, const double x){
    int f = 0;
    if(a*x >= 1) f++;
    return f;
}

int main(){
    const double a = 1.5;
    double x;
    cout << "Введите число X: "; cin >> x;

    cout << "ax " << (func(a,x)==1 ? ">= " : "< ") << 1 << endl;
    cout << "y = " << output(a,x,func(a,x));
  
    return 0;
}