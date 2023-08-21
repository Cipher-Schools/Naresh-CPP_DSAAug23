#include <iostream>

using namespace std;


class Parent {
    public:
    
        virtual void display() {
            cout << "VDParent";
        }
        
        void fun() {
            cout << "Parent";
        }
};


class Child: public Parent {
    
    public:
    
        void display() {
            cout << "DParent";
        }
    
        void fun() {
            cout << "Child";
        }
};


int main() {
    
    
    Parent *p;
    Child c;
    p = &c;
    //p->Parent::display();
    //p->fun();
    p->display(); //child class
    
    
    
    // Parent p = Child(); 
    // p.fun(); // parent class
    
    // Child c;
    // c.fun();
    // c.Parent::fun();
    
    // Parent p;
    // p.fun();
    
}