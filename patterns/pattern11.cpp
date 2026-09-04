#include<iostream>
using namespace std;

void pattern11(int n){
    // define start var, it will be used in inner loop to print required digits in a pattern
    int start;
    // outer loop will run for n times
    for(int i=0; i<n; i++){
        // In the even rows, entry of first column starts with 1, hence we are setting 
        // start = 1, when i is even
        // And setting start = 0, when i is odd, since in the odd rows entries are starting from 0
        if(i%2==0){start=1;}
        else{start = 0;}
        // Now print the rows
        for(int j=0; j<i+1; j++){
            cout<<start<<" ";
            // flipping the value of start
            // Since in each row, the start value is getting flipped
            start = 1-start;
        }
        // In each iteration of outer will print in newline
        cout<<'\n';
    }
}

// void pattern11(int n){
//     int b=1;
//     int t_prev = 0;
//     for(int i=0; i<n; i++){
//         if(t_prev==1){t_prev=0;}
//         else if(t_prev==0){t_prev=1;}
//         b=t_prev;
//         for(int j=0; j<i+1; j++){
//             cout<<b<<" ";
//             if(b==1){b=0;}
//             else if(b==0){b=1;}
//         }
//         cout<<'\n';
//     }
// }

int main(){
    int n;
    cin>>n;
    pattern11(n);
}