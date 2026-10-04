#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr(n);
        if(k>n) k=k%n;
        int j = 0;
        for(int i =k; i<n; i++){
            arr[j]=nums[i]; j++;
        }
        for(int i =0; i<k; i++){
            arr[j]=nums[i]; j++; 
        }
        for(int i =0; i<n; i++){
            nums[i]=arr[i]; 
        }
        return nums;
    }
};
int main(){
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int> newArr = sol.rotateArray(arr, 70);
    for(int i=0; i<arr.size(); i++){
        cout<<newArr[i]<<" ";
    }
}

