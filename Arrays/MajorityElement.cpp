#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0; int ele = 0;
        for(int i = 0; i<n; i++){
            if(count == 0){
            ele = nums[i];
            }
            if(nums[i]==ele){
                count++;
            }
            else{
                count--;
            }
        }
        return ele;
    }

    vector<int> leaders(vector<int>& nums) {
      vector<int> arr;
      
    }
};

int main(){
    Solution obj;
    // int arr[] = {5,4,6,7,8};
    // vector<int> arr1 = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    // vector<int> arr2 = {1, 1, 1, 2, 1, 2}; //[-1, -1, -1, -1]
    // int ele = obj.majorityElement(arr1);
    // cout<<ele;
    
}