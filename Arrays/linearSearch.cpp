#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int max = nums[0];
        for(int i=1; i<nums.size();i++){
            if(nums[i]>max){
                max = nums[i];
            }
        }
        cout<<max<<endl;
        int secondLargest = INT_MIN;
        for(int i=0; i<nums.size();i++){
            if(nums[i]>secondLargest && nums[i]!=max){
                secondLargest = nums[i];
            }
        }
        if(secondLargest==INT_MIN) return -1;
        else return secondLargest;
    }
    int optimalSlargest(vector<int>& arr){
        int largest = arr[0]; int sLargest = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>largest){
                sLargest = largest;
                largest = arr[i];
            }
            if(arr[i]>sLargest && arr[i]!=largest) sLargest = arr[i];
        }
        if(sLargest==INT_MIN) return -1;
        else return sLargest;
    }

    int findMaxConsecutiveOnes(vector<int>& nums) {
        int prevCount = 0;
        int currentCount = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]==1){
                currentCount++;
                if(currentCount>prevCount) prevCount=currentCount;
            }
            else if(nums[i]==0){
                currentCount=0;
            }
        }
        return prevCount;
    }
};
int main(){
    Solution s;
    // vector<int> arr = {8,7,23,17,15};
    // vector<int> arr = {1000,-10000};
    vector<int> arr = {1, 1, 0, 0, 1, 1, 1, 0};
    cout<<s.findMaxConsecutiveOnes(arr);
}