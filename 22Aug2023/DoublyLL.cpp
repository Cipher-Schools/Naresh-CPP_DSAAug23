#include <iostream>

using namespace std;

struct Node {
    int data;
    Node * next;
    Node *prev;
    
    Node(int data) {
        this->data = data;
        next = null;
        prev = null;
    }
};



int main() {
    
    Node *one = Node(1);
    Node *two = Node(2);
    Node *three = Node(3);
    
    one->next = two;
    one->prev = NULL;
    
    two->next = three;
    two->prev = one;
    
    three->next = NULL;
    three->prev = two;

    
}