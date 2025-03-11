// print sum of all array elements

#include<iostream>
using namespace std;

int sum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;
    int arr[100];
    cout << "Enter the Array elements: " << endl;
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    //function call
    cout << sum(arr, size);
}