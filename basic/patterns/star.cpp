#include <iostream>
using namespace std;

int main(){
   // int n = 5;
   // for(int i=1;i<n;i++){
   //     for(int j = 1; j<=i; j++){
   //         cout << "*";
   //     }
   //     cout << endl;
   // }

   //int n = 5;
   //for(int i=0;i<n;i++){
   // for(int j=0;j<(i+1);j++){
     //   cout << (i+1);
   // }
    //cout << endl;
   //}

   //int n = 5;
   //for(int i=0; i<n; i++){
   // for(int j=1; j<(i+1); j++){
    //    cout << j;
    //}
    //cout << endl;
  // }

  //int n = 5;
  //for(int i=1; i<n; i++){
   // for(int j = i;j>0; j--){
   //     cout << j;
   // }
   // cout << endl;
  //}

  int n = 5;
  int num = 1;
  for(int i=0;i<n;i++){
    for(int j=0;j<(i+1);j++){
        cout << num;
        num++;
    }
    cout << endl;
  }
}