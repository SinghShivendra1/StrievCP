#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int n= nums.size();
        int low= 0;
        int mid = 0;
        int high = n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid], nums[low]); low++; mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid], nums[high]); high--;
            }
        }
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
    }
};

int  main(){
    Solution s;
    // cout<<"hi";
    vector<int> nums = {1,0,1,0,1,0};
    s.sortZeroOneTwo(nums);
}