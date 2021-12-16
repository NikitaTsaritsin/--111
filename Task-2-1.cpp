#include <iostream>
#include <string>

using namespace std;

/**
 * \brief 
 */
enum class Operation
{
    /**
     * \brief 
     */
    one,

     /**
      * \brief 
      */
    two,

     /**
      * \brief 
      */
    three
};

void oneMultiplication(double &a, const double n);

void twoMultiplication(double &a, const double n);

void threeMultiplication(double &a, const double n);

int main(){
    double a, n; int score;
    cout << "Введите число A: "; cin >> a;
    cout << "Введите число N: "; cin >> n;
    cout << "Введите кол-во операций (1-3): "; cin >> score;
    
    switch(score-1){
        case static_cast<int>(Operation::one):{
            oneMultiplication(a, n);
            break;
        }
        case static_cast<int>(Operation::two):{
            twoMultiplication(a, n);
            break;
        }
        case static_cast<int>(Operation::three):{
            threeMultiplication(a, n);
            break;
        }
        default:
            cout << "Ошибка";
    }
    cout << "Результат " << n << " операций: " << a << endl;

    return 0;
}

void oneMultiplication(double &a, const double n){
    a = a*n;
}

void twoMultiplication(double &a, const double n){
    a = a*(2*n);
}

void threeMultiplication(double &a, const double n){
    a = a*(3*n);
}