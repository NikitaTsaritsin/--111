#include <iostream>
using namespace std;

double func(double A, double N, int score){
    cout << "A" << score << " = " << A*(score*N) << endl;
    return A*(score*N);
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