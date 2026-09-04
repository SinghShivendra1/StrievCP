#include<iostream>
using namespace std;

void pattern10(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
       cout<<'\n';   
    } 
    for(int i=0; i<n; i++){
        for(int j=n-i-1; j>0; j--){
            cout<<"*";
        }
       cout<<'\n';   
    }

}

int main(){
    int n; 
    cin>>n;
    pattern10(n);

}