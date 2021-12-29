#include <iostream>
#include <cmath>
using namespace std;

/**
 * \brief Решение 1го уравнения.
 * \param a Константа, данная в условии.
 * \param x Переменная, вводимая пользователем.
 * \return Значение первого уравнения.
*/ 
double first(const double a, const double x);

/**
 * \brief Решение 2го уравнения.
 * \param a Константа, данная в условии.
 * \param x Переменная, вводимая пользователем.
 * \return Значение второго уравнения.
*/ 
double second(const double a, const double x);

/**
 * \brief Определяет значение переменной y.
 * \param a Константа, данная в условии.
 * \param x Переменная, вводимая пользователем.
 * \param f Номер решаемого уравнения.
 * \return Значение переменной y.
*/ 
double output(const double a, const double x, const int f);

/**
 * \brief Определяет какое уранение будет решаться.
 * \param a Константа, данная в условии.
 * \param x Переменная, вводимая пользователем.
 * \return Номер уравнения.
*/ 
int func(const double a, const double x);

/**
 * \brief Точка входа в прграмму.
 * \return Возвращает 0 в случае успеха.
*/ 
int main(){
    const double a = 1.5; 
    double x;                               
    cout << "Введите число X: "; cin >> x;  

    cout << "a*x " << (func(a,x)==1 ? ">= " : "< ") << 1 << endl;    
    cout << "y = " << output(a,x,func(a,x));                        
  
    return 0;
}

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