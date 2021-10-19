#include <iostream>
#include <cmath>
using namespace std;

void main(){
    double a, b, c, gr, S, R;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "Угол между ними = "; cin >> gr;
    
    c = sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(gr));
    double pp = (a+b+c)/2;
    S = sqrt(pp*(pp-a)*(pp-b)*(pp-c));
    R = (a*b*c)/(4*S);
    
    cout << "a=" << a << " b=" << b << " c=" << c << endl;
    cout << "S=" << S << " R=" << R << endl << endl;

    return 0;
}