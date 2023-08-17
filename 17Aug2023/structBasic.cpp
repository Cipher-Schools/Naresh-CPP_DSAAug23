#include <iostream>

using namespace std;
/*


10 employess

emp {
    name, id, sal, dob, phn, company... etc
}


*/

struct Employee {
    
    string name ;
    int id;
    float sal;
    
};



int main() {
    
    
    struct Employee e1;
    e1.name = "Naresh";
    e1.id = 1;
    e1.sal = 1234;
    
    struct Employee* empPtr = &e1;
    
    cout << empPtr->name;
    
    
    
    
    
    // struct Employee empArr[10];
    // empArr[0].name = "Naresh";
    
    
    // cout << empArr[0].name;
    
    // struct Employee e1;
    // e1.name = "Naresh";
    // e1.id = 1;
    // e1.sal = 1234;
    
    // struct Employee e3 = {"Nishant", 3, 4444};
    // cout << e3.name <<" "<<e3.id <<" "<<e3.sal<<endl;
    //cout << e1.name <<" "<<e1.id <<" "<<e1.sal<<endl;
    
    
}