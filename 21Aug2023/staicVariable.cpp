#include <iostream>

using namespace std;

void fun() {
    static int x = 1;
    cout << x<<endl;
    x++;
}

int main() {
    
    fun();
    fun();
    fun();
}

##############################

#include <iostream>

using namespace std;

class A {
    public:
        static int x;
        int y;
};

int A::x = 0;

int main() {
    
    A o1;
    o1.x = 2;
    o1.y = 2;
    
    A o2;
    o2.x = 1;
    o2.y = 1;
    
    cout << o1.y << " "<< o2.y;
    //cout << o1.x << " "<< o2.x;
}



##################################

#include <iostream>

using namespace std;

class A {
    
    public:
        A() {
            cout << "Cons\n";
        }
        
        ~A() {
            cout<<"Des\n";
        }
    
};

int main() {
    
    {
        static A o1;
    }
    
    cout << "Exit\n";
}


######################################


class A {
    
    public:
        static int x;
        
        static void fun() {
            cout << x;
        }
};

int A::x = 1;

int main() {
    
    A::fun();
}
