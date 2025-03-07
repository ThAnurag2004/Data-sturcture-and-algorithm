#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[], int n){
    int max = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n){
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int size;
    cin >> size;

    int num[100];
    for(int i = 0; i<size; i++){
        cin >> num[i];
    }

    cout << getMax(num, size) << endl;
    cout << getMin(num, size) << endl;
}