#include<iostream>
using namespace std;

int main(){
    //for(int i = 1; i<=4; i++){
    //    char ch = 'A';
    //    for(int j = 1; j<=4; j++){
    //        cout << ch;
    //      ch = ch+1;

    //    }
   //     cout << endl;
    //}
    
    int num = 1;
    int n = 3;
    for(int i = 0; i<n ; i++){
        
        for(int j = 0; j<n ; j++ ){
            cout << num;
            num = num + 1;
        }
        cout << endl;
    }
}