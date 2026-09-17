#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

void printNames(int n, string name){
    if(n==0){
        return;
    }
    cout<<name<<" ";
    printNames(n-1, name);
}

void printN(int n){
    if(n==0){
        return;
    }
    printN(n-1);
    cout<<n<<" ";
}
int main(){
    int N;
    cin>>N;
    // string name;
    // cin>>name;
    // printNames(N, name);
    printN(N);
}