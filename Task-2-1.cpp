#include <iostream>
using namespace std;

double func(const double A, const double N, const int score){
    double out = A*(score*N); 
    cout << "A" << score << " = " << out << endl; 
    return out; 
}

int main(){
    double A, N;                                            
    cout << "Введите переменные A и N соответственно: ";    
    cin >> A >> N;                                          

    A = func(A, N, 1); 
    A = func(A, N, 2); 
    A = func(A, N, 3); 
  
    return 0;
}