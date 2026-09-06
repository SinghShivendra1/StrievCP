#include<iostream>
using namespace std;

void pattern22(int N){
    for(int i = 0; i<2*N-1;i++){
        // take the temporary var so that original N is not disturbed
        int temp = N;
        // Take the flag var to decrement the value of temp.(here i get fixed and j progress)
        int flag = 0;
        // The flag value is assigned different values as the matrix start behaving differently as the row number greater or equal to N
        if(i>=N){
            flag = 2*N-2-i;
        }
        else{
            flag = i;
        }
        for(int j=0; j<2*N-1; j++){
            // from 1st row onwards, start from N and start decrementing
            // decrement 2nd value of 2nd col of row 2 till j reaches N-1
            // th position from last and start incrementing till last
            // this continues untill jth position sees value 1
            //  here i=1, means decrement once->continue till second last 
            // ele, then increment last element as i=1

            // print the temp value as it is if no conditions are passed
            cout<<temp;
            // decrement temp till flag becomes -1
            if(flag>0){
                temp = temp-1;
                flag--;
            }
            // Before i=N, 
            if(j>=2*N-2-i && i<N){
                temp+=1;
            }
            else if(j>=i && i>=N){
                temp+=1;
            }
        }
        cout<<'\n';
    }
}

int main(){
    int n;
    cin>>n;
    pattern22(n);
}

// Run on striever platform
// class Solution {
// public:
//     void pattern22(int N){
//     for(int i = 0; i<2*N-1;i++){
//         int temp = N;
//         int flag = 0;
//         if(i>=N){
//             flag = 2*N-2-i;
//         }
//         else{
//             flag = i;
//         }
//         for(int j=0; j<2*N-1; j++){
//             cout<<temp<<" ";
//             if(flag>0){
//                 temp = temp-1;
//                 flag--;
//             }
//             // Before i=N, 
//             if(j>=2*N-2-i && i<N){
//                 temp+=1;
//             }
//             else if(j>=i && i>=N){
//                 temp+=1;
//             }
//         }
//         cout<<'\n';
//     }
// }
// };