#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " " << endl;
    }
}

int main(){
    int arr[5] ={1,2,3,4,50};
    int brr[6] ={5,6,8,9,3};

    reverse(arr, 5);
    reverse(brr, 6);

    printarray(arr, 5);
    printarray(brr, 6);
}