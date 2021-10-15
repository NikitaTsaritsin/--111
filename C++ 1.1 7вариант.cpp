#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x = 0.5; double y = 0.05; double z = 0.7;
    double a, b;
    
    a = (pow(x,2)*(x+1))/(y-((1-cos(x+z))/2));
    b = sqrt((x*y)/z)+((1+cos(pow(x+y,2)))/2);
    
    cout << "x=" << x << " y=" << y << " z=" << z << endl;
    cout << "a=" << a << " b=" << b << endl << endl;

    return 0;
}