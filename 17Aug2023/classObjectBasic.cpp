#include <iostream>

using namespace std;

struct Emp{
    
    // public
};

class Car {
    
    string company;
    string color;
    int price;
    int speed;
    
    // private
    public:
        int getSpeed() {
            cout << "10";
            return 10;
        }
        
        void applyBreak() {
            
        }
};


int main() {
    
    Car c1;
    c1.getSpeed();
    
}