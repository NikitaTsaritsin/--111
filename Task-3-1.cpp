#include <iostream>
#include <cmath>
using namespace std;

void output(const double x){
    try{ 
        double y;
        y = sqrt(1 - x) - cos(sqrt(1 - x)); 
        cout << "x = " << x << "\t\ty = " << y << endl; 
    } catch (exception& e){ 
        cout << "Решения нет!" << endl;
    }
}

void func(double x, const double x2, const double s){
    while (x != (x2 + s)-1){    
        if (x <= x2){           
            output(x);          
            x += s;             
        }
    }
}

int main(){
    const double x = 0;         
    const double x2 = 1;        
    const double stap = 0.1;    

    func(x,x2,stap); 

    return 0;
}