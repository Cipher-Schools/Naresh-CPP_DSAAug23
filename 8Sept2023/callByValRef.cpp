/*

parking lot system

car, bus, bike, truck

0 -> car
1 -> bus
2 -> bike
3 -> truck
4 -> scooty


enum Vichael {
    Car, Bus, Bike, Truck
}

enum Gender {
    Male, Female, NA
}

*/




#include <iostream>

using namespace std;

// call by value
void changeData(int x) {
    
    x = 20;
}

// call by ref
void changeDataByRef(int* x) {
    
    *x = 20;
}


void changeArrData(int* arr) {
    
    int brr[3];
    for(int i =0; i < 3; i++) {
        brr[i] = arr[i];
    }
    
    brr[0] = 10;
    
    
    //arr[0] = 10;
    //cout << sizeof(arr)/sizeof(arr[0]);
}



int main() {
    
    int arr[] = {1, 2, 3};
    changeArrData(arr);
    
    //cout << sizeof(arr)/sizeof(arr[0]);
    cout << arr[0];
    
    
//     int x = 10;
//     changeDataByRef(&x);
//   // changeData(x);
    
//     cout << x;
    
}