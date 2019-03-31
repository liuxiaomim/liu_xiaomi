#ifndef POLYNIMIAL_H
#define POLYNOMIAL_H
#include <iostream>  
 
using namespace std;  
    
class Term
{
    friend Polynomial;  
public:  
    float coef;
    int exp;
};  
  
class Polynomial
 {   friend ostream & operator<<(ostream &o,const Polynomial & poly);  
public:  
    Polynomial();  
    Polynomial(const Polynomial & poly);  
    ~Polynomial();  
    Polynomial operator+(const Polynomial & poly);
    Polynomial operator-(const Polynomial & poly);
    Polynomial operator*(const Polynomial & poly);
    float Eval(float x);
    void NewTerm(float coef,int exp);
private:  
    void insertTerm(const Term & term);
private:  
    Term *termArray;
    int capacity;
    int terms;
}; 
#endif
