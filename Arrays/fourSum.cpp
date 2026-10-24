#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++){
            // if(i>0 && nums[i]==nums[i-1]) continue;
            int var1 = nums[i];
            int var2 = nums[i+1];
            int j = i+2;
            int k = n-1;
            // if(i>0 && var1==var2) continue;
            int sum = var1+var1+nums[j]+nums[k];
            while(j<k){
                if(sum==target){
                vector<int> row = {var1,var2,nums[j],nums[k]};
                v.push_back(row);
                // while(j<k && nums[j] == nums[j+1]) j++;
                // while(j<k && nums[k] == nums[k-1]) k--;
                j++;
                k--;
            }
            else if(sum<target){
                j++;
            }
            else{
                k--;
            }
            }
            
        }
        return v;
    }
};

int main() {

    Solution s;
    vector<int> arr = {1, -2, 3, 5, 7, 9}; // Output: [[-2, 1, 3, 5]]
    int target = 7;
    vector<vector<int>> v = s.fourSum(arr,target);
    for (const auto& row : v) {
        for (const auto& x : row) {
            cout << x << " ";
        }
        cout << endl;
    }
}