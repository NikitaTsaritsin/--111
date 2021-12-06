#include <iostream>
#include <cmath>
using namespace std;

double functionOne(double x, y, z){
    return (pow(x,2)*(x+1))/(y-((1-cos(x+z))/2));
}
double functionTwo(double x, y, z){
    return sqrt((x*y)/z)+((1+cos(pow(x+y,2)))/2);
}

int main(){
    const double x = 0.5; 
    const double y = 0.05; 
    const double z = 0.7;

    cout << "x=" << x << " y=" << y << " z=" << z << endl;
    cout << "a=" << functionOne(x, y, z) << endl; 
    cout << "b=" << functionTwo(x, y, z) << endl; 

    return 0;
}