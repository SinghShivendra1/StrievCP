#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int prevSum = nums[0];
        int n= nums.size();
        for(int i=1;i<n;i++){
            if(currentSum<0){
            currentSum = 0;
            }
            currentSum+=nums[i];
            if(currentSum>prevSum){
            prevSum=currentSum;
        }
        }
        return prevSum;
    }
};

int  main(){
    Solution s;
    vector<int> nums = {2, 3, 5, -2, 7, -4};
    int k = s.maxSubArray(nums);
    cout<<k<<endl;
}