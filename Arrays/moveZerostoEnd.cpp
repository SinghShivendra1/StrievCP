#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    // void moveZeroes(vector<int>& nums) {
    //     int n = nums.size();
    //     int j = n-1;
    //     for(int i = 0; i<n; i++){
    //         if(i<=j && nums[i]==0){
    //             swap(nums[i],nums[j]);
    //             j--;
    //         }
    //     }
    // }
    // void moveZeroes(vector<int>& nums) {
    //     int n = nums.size();
    //     int count = 0;
    //     for(int i=0; i<n; i++){
    //         if(nums[i]==0) count++;
    //         else{
    //             nums[i-count] = nums[i];
    //         }
    //     }
    //     for(int i = n-count; i<n; i++){
    //         nums[i] = 0;
    //     }
    // }
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int j = -1;
        for(int i=0; i<n; i++){
            if(nums[i]==0) count++;
            else{
                nums[i-count] = nums[i];
            }
        }
        for(int i = n-count; i<n; i++){
            nums[i] = 0;
        }
    }
};
int main(){
    vector<int> arr = {1, 0, 0, 4, 0, 5, 2};
    Solution s;
    s.moveZeroes(arr);
    for(auto it : arr){
        cout<<it<<" ";
    }
}