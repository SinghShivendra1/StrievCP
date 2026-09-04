#include<bits/stdc++.h>

using namespace std;
// pass by value
void doSomething(int num){
    cout<<num<<'\n';
    num+=5;
}
int main(){
    int n;
    cin>>n;
    doSomething(n);
    cout<<n;
}