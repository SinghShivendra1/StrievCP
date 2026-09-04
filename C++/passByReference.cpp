#include<bits/stdc++.h>

using namespace std;
// pass by value
// void doSomething(string &str){
//     cout<<str<<'\n';
//     str[0] = 't';
//     cout<<str<<'\n';
// }
// int main(){
//     string str;
//     cin>>str;
//     doSomething(str);
//     cout<<str<<'\n';
// }

void doSomething(int &num){
    cout<<"inLoop"<<'\n';
    cout<<num<<'\n';
    num+= 12;
    cout<<num<<'\n';
}
int main(){
    int num;
    cin>>num;
    doSomething(num);
    cout<<num<<'\n';
}