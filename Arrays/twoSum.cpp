#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;


#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> result;
        for(int i = 0; i < nums.size(); i++){
            int req = target - nums[i];
            if(result.find(req) != result.end()){
                return {result[req], i};
            }
            result[nums[i]] = i;
        }
        return {};
    }
};

int main(){
    
}