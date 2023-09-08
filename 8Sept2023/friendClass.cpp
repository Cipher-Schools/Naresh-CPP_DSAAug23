#include <iostream>
using namespace std;

class Demo {
    
    private:
        int pri_var;
        
    protected:
        int pro_var;
    
    public:
        Demo() {
            pri_var = 1;
            pro_var = 2;
        }
    
    friend class FriClass;
};

class FriClass {
    
    public:
        
        void printData(Demo& d) {
            cout << "Pri var: " <<d.pri_var << endl;
            cout << "Pro var: " <<d.pro_var << endl;
        }
    
};


int main() {
    
    Demo d;
    FriClass fri;
    
    fri.printData(d);

}