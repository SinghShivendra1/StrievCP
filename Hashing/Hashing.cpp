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
    int findHighestFreqEle(vector<int>& arr){
        unordered_map<int, int> freq;
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
        for(auto it : freq){
            
        }
    }
};

int main(){
    hashBasics hash;
    // hash.storeAndRetrieve();
    // vector<int> arr = {1,2,2,3,3,3};
    // hash.frequencyCounting(arr, 6);
    vector<int> arr = {10,2,2,5,3,3,3,4, 14,1};
    // hash.findDuplicates(arr);
    hash.firstNonRElement(arr);
    return 0;
}