#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int pascalTriangleI(int r, int c) {
        int Pascal[r][r];
        // Pascal[0][0]=1;
        for(int i=0;i<r;i++){
            for(int j=0;j<=i;j++){
                if(j==0)  Pascal[i][j] = 1;
                else if(j==i)  Pascal[i][j] = 1;
                else{Pascal[i][j]=Pascal[i][j]=Pascal[i-1][j-1]+Pascal[i-1][j];
                }
            }
        }
        return Pascal[r-1][c-1];
    }
};
int main(){
    Solution s;
    cout<<s.pascalTriangleI(4,2);
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