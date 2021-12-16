#include <iostream>     
#include <cmath>        
using namespace std;    

/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \param z параметр z
 * \return значение функции
 */

double functionOne(const double x, const double y, const double z){ 
    return (pow(x,2)*(x+1))/(y-((1-cos(x+z))/2)); 
} 

/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \param z параметр z
 * \return   значение функции
 */

double functionTwo(const double x, const double y, const double z){ 
    return sqrt((x*y)/z)+((1+cos(pow(x+y,2)))/2); 
} 


/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */


int main(){ 
    const double x = 0.5;  
    const double y = 0.05; 
    const double z = 0.7;  

    cout << "x=" << x << " y=" << y << " z=" << z << endl; 
    /**
     * \brief Использование функий
     *\code 
     *double functionOne(const double x, const double y, const double z){ 
    return (pow(x,2)*(x+1))/(y-((1-cos(x+z))/2)); 
     *\endcode
     */
} 

    cout << "a=" << functionOne(x, y, z) << endl;  
    /**
     * \brief Использование функций
     *\code
     *double functionTwo(const double x, const double y, const double z){ 
    return sqrt((x*y)/z)+((1+cos(pow(x+y,2)))/2); 
    *\endcode
    */         
    cout << "b=" << functionTwo(x, y, z) << endl;           

    return 0; 
}