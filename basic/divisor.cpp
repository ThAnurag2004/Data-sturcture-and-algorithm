#include <iostream>
using namespace std;

int sumDivisor(int n){
    int sum = 0;
    
    for(int i = 1; i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j == 0){
                sum = sum+j;
            }
        }
        
    }
    cout << sum;
}

int main (){
    int a;
    cin >> a ;
    sumDivisor(a);
}
