

#include <iostream>

using namespace std;


int partition(int arr[], int len, int si, int ei) {
    
    int i = si - 1;
    
    for(int j = si; j < ei; j++) {
        
        if(arr[j] <= arr[ei]) {
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
        
    }
    
    i++;
    int temp = arr[ei];
    arr[ei] = arr[i];
    arr[i] = temp;
    
    return i;
    
}


void quickSort(int arr[], int len, int si, int ei) {
    
    if(si >= ei) {
        return ;
    }
    
    
    int pi = partition(arr, len, si, ei);
    
    quickSort(arr, len, si, pi - 1);
    quickSort(arr, len, pi + 1, ei);
    
}


int main() {
    
    int arr[] = {4, 5, 2, 7, 1, 3};
    quickSort(arr,  6, 0, 5);
    
    for(int i = 0; i < 6; i++) {
        cout << arr[i] <<" ";
    }
    
}