#include<iostream>
using namespace std;

// Both the functions have same, but second code is cleaner and has better control of the work
// Time Complexity: O(n²), and
// Space Complexity: O(1)

// In this method i am using two separate for loops in the outer loop
// and dividing the problem in the upper pyramid and lower pyramid and solving
// separately to print the pattern.
// void pattern10(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//        cout<<'\n';   
//     } 
//     for(int i=0; i<n; i++){
//         for(int j=n-i-1; j>0; j--){
//             cout<<"*";
//         }
//        cout<<'\n';   
//     }
// }

void pattern10(int n){
    // focus on the number of rows, it will go till 2n-1 rows.
    for(int i=0; i<2*n-1; i++){
        int stars;
        // We want to print 1 star at row 1, 2 stars in row 2 till 4 stars in row 4
        // Then we want to print 3 stars, 2 stars and 1 star at last row, which 
        // is (2*n-1)th row.
        // Main idea is: print i+1(since i starting from 0) stars if n > i;
        // This idea will help to print 1 star in step 1, 2 stars in step 2, 3 stars
        // in step and 4 stars in step 4. (I am taking n = 4)
        if(n>i){
            stars = i+1;
        }else{
            // This formula will help us to calculate the number of stars from 5th row onwards
            // 5th row(when i=4, since i will go from 0 to 7) will have 3 stars,
            // 6th row = 2 stars, 7th row = 1 star.
            stars = 2*n-i-1;
        }
        // No print the number of stars.
        for(int j=0; j<stars; j++){
            cout<<"*";
        }
        cout<<'\n';
    }
}

int main(){
    // Take the user input
    int n; 
    cin>>n;
    // Print the pattern
    pattern10(n);

}