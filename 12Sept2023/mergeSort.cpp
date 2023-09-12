

#include <iostream>

using namespace std;



void merge(int arr[], int len, int si, int mid, int ei) {
    
    int lenA = mid - si + 1;
    int lenB = ei - mid;
    
    int a[mid - si + 1];
    int b[ei - mid];
    
    int k = 0;
    for(int i = si; i <= mid; i++) {
        a[k] = arr[i];
        k++;
    }
    
    k = 0;
    for(int i = mid + 1; i <= ei; i++) {
        b[k] = arr[i];
        k++;
    }
    
    
    int i = 0;
    int j = 0;
    k = si;
    
    
    while(i < lenA && j < lenB) {
        
        if(a[i] < b[j]) {
            arr[k] = a[i];
            k++;
            i++;
        }else {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    
    while( i < lenA) {
        arr[k] = a[i];
        i++;
        k++;
    }
    
    
    while( j < lenB) {
        arr[k] = b[j];
        j++;
        k++;
    }
  
    
}


void mergeSort(int arr[], int len, int si, int ei) {
    
    // base case
    
    if(si >= ei) {
        return ;
    }
    
    int mid = (si + ei) / 2;
    
    mergeSort(arr, len, si, mid);
    mergeSort(arr, len, mid + 1, ei);
    
    merge(arr, len, si, mid, ei);
    
}


int main() {
    
    int arr[] = {4, 5, 2, 7, 1, 3};
    mergeSort(arr,  6, 0, 5);
    
    for(int i = 0; i < 6; i++) {
        cout << arr[i] <<" ";
    }
    
}