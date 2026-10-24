#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int> row;
                    row = {nums[i],nums[j],nums[k]};
                    v.push_back(row);

                    while(j<k && nums[j] == nums[j+1]) j++;
                    while(j<k && nums[k] == nums[k-1]) k--;
                    j++;
                    k--;
                }
                else if(sum<0){
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
    vector<int> arr = {2, -2, 0, 3, -3, 5};
    vector<vector<int>> v = s.threeSum(arr);
    for (const auto& row : v) {
        for (const auto& x : row) {
            cout << x << " ";
        }
        cout << endl;
    }
}