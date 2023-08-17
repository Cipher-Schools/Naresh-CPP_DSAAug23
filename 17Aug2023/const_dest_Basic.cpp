#include <iostream>

using namespace std;

class Node {
    int data;
    Node *next;
    
    public:
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};



class Student {
    public:
        int rNo;
        string name;
        int fees;
    
    public:
        Student();
        // Student() {
        //     // Default const
        //     cout << "A";
        // }
        
        Student(int rNo, string name) {
            //parametrised
            this->rNo = rNo;
            this->name = name;
        }
        
        string getName() {
            return this->name;
        }
        
        void fun();
        
        ~Student() {
            cout << "\nDest";
        }
    
};


void Student::fun() {
            cout <<"Fun";
        }
        
Student::Student() {
    cout<<"Default\n";
}



class Test {

    string name;
    
    public:
        Test(string name) {
            this->name = name;
        }
        
        ~Test() {
            cout << this->name << endl;
        }
};




int main() {
    
    
    Test t1("A");
    Test t3("C");
    Test t2("B");
    
    
    
    
    
    // Student s2;
    // Student s1(10, "Naresh");
    
    // Student s3(s1); // copy constructor
    // cout<<s3.name;
    // s1.fun();
    //cout<<s1.name;
}