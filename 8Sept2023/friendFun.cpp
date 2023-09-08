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
    
    friend void friendFun(Demo& d);
};

void friendFun(Demo& d) {
    cout << "Pri var: " <<d.pri_var << endl;
    cout << "Pro var: " <<d.pro_var << endl;
}

// declare
class Second;

class First {
    int x = 1;
    
    public:
        friend void sum(First, Second);
};


class Second {
    int y = 2;
    
    public:
        friend void sum(First, Second);
};


void sum(First f, Second s) {
    cout << f.x + s.y;
}



int main() {
    First f;
    Second s;
    
    sum(f, s);
    
    
    // Demo d;
    // friendFun(d);

}