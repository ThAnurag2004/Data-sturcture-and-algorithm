#include<iostream>
using namespace std;

int main(){
    int n;
    int rev = 0;
    cin >> n;
    while(n>0){
        int id = n%10;
        rev = (rev*10)+id;
        n = n/10;
    }
    cout << rev;
}