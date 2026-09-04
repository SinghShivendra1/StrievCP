#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<2*i+1; k++){
            cout<<"*";
        }
        cout<<'\n';
    }
}

// int main(){
//     int n;
//     cin>>n;
//     int k=n;
//     for(int i=0; i<n; i++){
//         int t=k;
//         for(int j=2*i+1; j>0; j--){
//             while(t>0){
//                 cout<<" ";
//                 t--;
//             }
//             cout<<"*";
//         }
//         k--;
//         cout<<'\n';
//     }
// }