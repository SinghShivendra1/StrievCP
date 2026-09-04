#include<iostream>
using namespace std;

void pattern8(int n) {
    // Step 1: Number of rows: n
    for (int i = 0; i < n; i++) {
        // Step 2.1: Spaces - Number of columns: i
        for (int j = 0; j < i; j++) {
            // Step 3.1: Printing spaces i times
            cout<<"  ";
        }

        // Step 2.2: Stars - Number of columns: 2*n - (2*i + 1) + 1, e.g. step 1: 9, step 2: 7, step 3: 5, step 4: 3
        for (int j = 0; j < 2*n - (2*i + 1) ; j++) {
            // Step 3.1: Printing stars 2*i+1 times
            cout<<"* ";
        }
        cout<<endl;
        // Step 4: Observing Symmetry: NOT REQUIRED
    }
}

int main(){
    int n;
    cin>>n;
    pattern8(n);
    // here i have taken extra temp variable, it is not neeeded if i had found out the relationship between 
    // n and i to print stars.
    // int t = n;
    // for(int i=0; i<n; i++){
        
    //     for(int j=0; j<i; j++){
    //         cout<<" ";
    //     }
    //     for(int k=2*t-1; k>0; k--){
    //         cout<<"*";
    //     }
    //     t--;
    //     cout<<'\n';
    // }
}

