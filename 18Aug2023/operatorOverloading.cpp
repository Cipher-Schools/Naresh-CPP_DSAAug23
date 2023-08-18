#include <iostream>

using namespace std;

class Complex {
    
    int real;
    int imag;
    
    public:
        Complex(){}
        
        Complex(int real, int imag) {
            this->real = real;
            this->imag = imag;
        }
        
        Complex operator+(Complex c2) {
            
            Complex temp;
            temp.real = this->real + c2.real;
            temp.imag = this->imag + c2.imag;
            
            return temp;
            

        }
        
        Complex operator-(Complex c2) {
            
            Complex temp;
            temp.real = this->real - c2.real;
            temp.imag = this->imag - c2.imag;
            
            return temp;
            

        }
        
        void print() {
            cout << this->real <<" + "<<this->imag<<"i\n";
        }
        
    
};


int main() {
    
    Complex c1(1, 2);
    //c1.print();
    Complex c2(3, 4);
    
    
    
    Complex c3 = c1 + c2;
    c3.print();
    
    Complex c4 = c1 - c2;
    c4.print();
    
    
}