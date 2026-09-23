#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class hashBasics{
    public:
    void storeAndRetrieve(){
        // Rahul → 85
        // Amit  → 92
        // Priya → 78
        // Because the key is a string and the value is an int:
        unordered_map<string, int> marks;
        marks["Raj"] = 90;
        marks["Neha"] = 85;
        marks["Sam"] = 95;
        cout << marks["Sam"]; //95
    }

    void frequencyCounting(vector<int>& arr, int n){
        unordered_map<int,int> freq;
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        for (auto x : freq) {
            cout << x.first << " -> " << x.second << endl;
        }
        cout<<freq[3];
    }
    void findDuplicates(vector<int>& arr){
        unordered_map<int, int> freq;
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
        for(const auto& x : freq){
            if(x.second>1){cout<<x.first<<endl;}
        }
    }

    void firstNonRElement(vector<int>& arr){
        unordered_map<int, int> freq;
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
        for(int i=0; i<arr.size(); i++){
            if(freq[arr[i]] == 1){
                cout<<arr[i];
                return; //why not used break
            }
        }
    }
    void findHighestFreqEle(vector<int>& arr){
        unordered_map<int, int> freq;
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
        int max = 0;
        int answer = 0;
        for(auto it : freq){
            if(it.second>max){max = it.second;// answer = it.first;
            }
        }
        // iterate through arr not unordered map
        for(int i=0; i<arr.size();i++){
            if(freq[arr[i]] == max){
                answer = arr[i];
                cout<<"maxFrequency: "<<answer;
                return;
            }
        }
    }

    // If there is a tie i want smaller element
    void smallerEleTie(vector<int>& arr){
        int n = arr.size();
        unordered_map<int, int> freq;
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        int max = 0; int ans=0;
        for(auto it : freq){
            if(it.second > max){
                max = it.second;
                ans = it.first;
            }
            else if(it.first<ans && it.second == max){
                ans = it.first;
            }
        }
        cout<<"Highest freq: "<<max<<'\n';
        cout<<"Most freq element, smallest when tie: "<<ans;
    }

    // code is not actually finding the second-highest frequency; 
    // it's looking for an element whose frequency is exactly max - 1
    // take nums = {4,4,4,5,5,5,6}, here max-1 =2 but there is no 2 here.
    // int secondMostFrequentElement(vector<int>& nums) {
    //     unordered_map<int, int>freq;
    //     int n = nums.size();
    //     for(int i=0; i<n; i++){
    //         freq[nums[i]]++;
    //     }
    //     int max = 0; int ans=0;
    //     for(auto it:freq){
    //         if(it.second>max){
    //             max = it.second;
    //         }
    //     }
    //     for(int i=0; i<n; i++){
    //         if(freq[nums[i]] == max-1){
    //             return nums[i];
    //         }
    //     }
    //     return 0;
    // }

    int secondMostFrequentElement(vector<int>& nums) {
        // test for elem with freq 45,1,1,1
        // check for single element
        unordered_map<int, int>freq;
        int n = nums.size();
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        int max = 0; int secondMax = 0;
        for(auto it:freq){
            if(it.second>max){
                max = it.second;
            }
        }
        for(auto it : freq){
            if(it.second < max && it.second > secondMax){
                secondMax = it.second;
            }
        }
        if(secondMax==0){return -1;}
        int ans = INT_MAX;
        for(auto it:freq){
            if(it.second == secondMax){
                ans=min(ans,it.first);
            }
        }
        return ans;
    }
};

int main(){
    hashBasics hash;
    // hash.storeAndRetrieve();
    // vector<int> arr = {1,2,2,3,3,3};
    // hash.frequencyCounting(arr, 6);
    // vector<int> arr = {10,2,2,2,2,5,3,3,3,3,4, 14,1};
    // vector<int> arr = {10,3,3,2,2,5,3,2,2,3,4, 14,1};
    // vector<int> arr = {4,4,4,5,5,5,6};
    vector<int> arr = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1000,100,10};
    // hash.findDuplicates(arr);
    // hash.firstNonRElement(arr);
    // hash.findHighestFreqEle(arr);
    // hash.smallerEleTie(arr);
    cout<<"Second most frequent: "<<hash.secondMostFrequentElement(arr);
    return 0;
}