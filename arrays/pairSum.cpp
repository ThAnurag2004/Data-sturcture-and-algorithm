#include<iostream>
using namespace std;

void sum(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(arr[i]+arr[j] == target ){
                cout << arr[i];
                cout << arr[j];
            }
        }
    }
}

int main(){
    int target = 5;
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    sum(arr, size, target);
}