#include<iostream>
using namespace std;
class Complex;

class Calculator
{
    public:
    int add(int a, int b)
    {
        return(a + b);
    }
int sumRealComplex(Complex,Complex);
int sumRealcomplex(Complex,Complex);
};

class Complex
{ int a, b;
public:
void setNuber(int n1, int n2){
    a = n1;
    b = n2;
}
void printNumber(){
    cout<<"Your number is"<<a<<"+"<< b << "i"<< endl;
}
};
int Calculator ::sumRealComplex(Complex o1, Complex o2){
    return(o1.a + o2.a);

}
int Calculator :: sumRealComplex(Complex o1 , Complex o2){
    return(o1.b + o2.b);
}