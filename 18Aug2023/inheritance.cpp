#include <iostream>

using namespace std;
/*
struct, union , enum
class, objct,constructor,access modifer


Inheritance
Polymorphism


*/

/*

fuelAmount()
capacity()
applyBrakes()

*/

class Vehicle {
    
    int fuelAmountVar;
    int capacityVar;
    
    
    public:
        
        int fuelAmount(){
            cout << "FuelAmount is y";
            return 10;
        }
        
        void capacity(){
            cout << "Capacity is x";
        }
        
        void applyBrakes(){
            cout<< "Vehicle Stop";
        } 
        
        void fun1() {
            cout << "Fun1";
        }
    
    protected:
        int x = 10;
        void fun2() {
            cout << "Fun2";
        }
        
    private:
        void fun3() {
            cout << "Fun3";
        }
        
        
        
};

class Car: public Vehicle {
    public:
    
        void getPro() {
            cout << x;
        }
    
};

class Truck {
     
};

class Bus {
     
};

class A {
    public:
        int a = 10;
    
};

class B {
    public:
        int a = 20;
};

class C: public A, public B {
    
};


int main() {
    
    C c1;
    cout << c1.B::a;
    
}