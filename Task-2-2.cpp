#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

double first(double a, double x){
    return a - log10(a*x);
}
double second(double a, double x){
    return a + log10(a*x);
}

double output(double a, double x, int f){
    double out = (f==0 ? first(a,x) : second(a,x));
    return out;
}
int func(double a, double x){
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