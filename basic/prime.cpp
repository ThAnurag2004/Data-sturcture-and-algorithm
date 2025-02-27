#include<iostream>
using namespace std;

int fact(int n){
    int res = 1;
    for(int i = 2; i<=n;i++){
        res = res*i; 
    }
    return res;
}

void quiz(vector <int> &v, int x){
     

    for(int i = 0;i<=x+3;i++){
        v.emplace_back(fact(i));
    }
    for(int j = v[0];j<=v.size();j++){
        if(j<=x){
            cout << j;
        }
    }
}

int main(){
    vector <int> v;
    int x = 5;
    quiz(v,x);
}