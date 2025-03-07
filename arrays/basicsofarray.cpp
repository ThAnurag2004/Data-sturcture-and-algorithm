#include<iostream>
using namespace std;


void print_array(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    // declaring array
    int number[15];

    // accessing array element of any index
    // cout << "value at 0 index " << number[0] << endl;

    // initialisation of array
    int sum[15] ={2,11,5};
    int size = 15;

    cout << sum[2] << endl;

    // accessing each elements of array

   print_array(sum, 15);

    cout << endl << "everything is fine" << endl;
}