#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int size;
    cin >> size;
    int arr[10]={1, 2, 3, 4, 11, 0, 1, 22, 48, 10};
    int key;
    cin >> key;
    bool found = linearSearch(arr, size, key);
    if(found){
        cout << "Key is found";
    }
    else{
        cout << "Key is not found";
    }
}