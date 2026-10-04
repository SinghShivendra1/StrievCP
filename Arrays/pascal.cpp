#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int pascalTriangleI(int r, int c) {
        // vector<vector<int>> Pascal(numRows);
        int Pascal[r][r];
        // Pascal[0][0]=1;
        for(int i=0;i<r;i++){
            // Pascal[i].resize(i + 1);
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)  Pascal[i][j] = 1;
                else{Pascal[i][j]=Pascal[i-1][j-1]+Pascal[i-1][j];
                }
            }
        }
        return Pascal[r-1][c-1];
        // return Pascal;
    }

    // vector<int> pascalTriangleII(int r) {
    //     vector<vector<int>> Pascal(r);
    //     for(int i=0; i<r; i++){
    //         // Pascal[i].resize(i + 1);
    //         for(int j=0; j<=i; j++){
    //             if(j==0 || j==i) Pascal[i][j]=1;
    //             else Pascal[i][j] = Pascal[i-1][j]+Pascal[i-1][j-1];
    //         }
    //     }
    //     return Pascal[r-1];
    // }
    vector<int> pascalTriangleII(int r) {
    vector<int> Pascal(r, 1);
    for (int i = 1; i < r; i++) {
        for (int j = i - 1; j > 0; j--) {
            Pascal[j] = Pascal[j] + Pascal[j - 1];
        }
    }
    return Pascal;
}
};
int main(){
    Solution s;
    // cout<<s.pascalTriangleI(4,2);
    vector<int> Pascal = s.pascalTriangleII(4);
    for(auto it:Pascal){
        cout<<it<<" ";
    }
}
// Pascal[r][c]=Pascal[r−1][c−1]+Pascal[r−1][c]
// Input: r = 4, c = 2

// Output: 3

// Explanation:

// The Pascal's Triangle is as follows:

// 1

// 1 1

// 1 2 1

// 1 3 3 1