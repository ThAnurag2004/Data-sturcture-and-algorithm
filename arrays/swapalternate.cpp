#include<iostream>
using namespace std;

//printing of array

void print(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//swap function

void swapAlternate(int arr[], int size){
   for(int i = 0; i<size; i+=2){
    if(i+1 < size){
        swap(arr[i], arr[i+1]);
    }
   }
}

int main(){

    //taking input

    int size;
    cin >> size;

    int arr[100];
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    //function call

    swapAlternate(arr, size);
    print(arr, size);
}