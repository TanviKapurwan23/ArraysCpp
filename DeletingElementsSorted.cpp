#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key);


int deleteElement(int arr[], int n, int key){
    int pos = binarySearch(arr, 0, n-1, key);

    if(pos == -1){
        cout<<"Element not found";
        return n;
    }
    int i;
    for(int i=pos; i<n-1; i++){
        arr[i] = arr[i + 1];
        return n-1;
    }
}



int binarySearch(int arr[], int low, int high, int key){
  if(high < low){
    return -1;
  }
  int mid = (low + high)/2;

  if(key == arr[mid]){
    return mid;
  }
  if(key > arr[mid]){
    return binarySearch(arr, (mid + 1), high, key);
  }

  return binarySearch(arr, low, (mid - 1), key);
}


int main(){

    int i;
    int arr[] = {10, 20, 30, 40, 50};

    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 30;

    cout<<"Array before deletion";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    n = deleteElement(arr, n, key);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }




    return 0;
}