#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    stack<int> s;
    
    // Insert values
    s.push(1);
    s.push(4);
    s.push(7);
    s.push(2);
    
    // remove an element
    s.pop();
    
    //
    cout<< s.top() << endl;
    
    cout<< s.size() << endl;
    
    cout << s.empty() << endl; 
    
    
    
    
    
}