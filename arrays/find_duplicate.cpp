#include<iostream>
using namespace std;

int unique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    for(int i = 1; i<size; i++ ){
        ans = ans^i;
    }
    return ans;
}

int main(){
    int arr[6] ={3,5,6,4,5};
    
    int size = 6;

    cout << unique(arr, size);
}