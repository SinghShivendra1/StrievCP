#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Practice{
    public:
    vector<int> quickSort(vector<int>& arr){
        quickSortH(arr,0,arr.size()-1);
        return arr;
    }
    private:
    void quickSortH(vector<int>& arr, int start, int end){
        if(end<=start) return;
        int pivot = partition(arr, start, end);
        quickSortH(arr, start, pivot-1);
        quickSortH(arr,pivot+1, end);
    }
    int partition(vector<int>& arr, int start, int end){
        int i = start - 1;
        for(int j=start; j<=end-1; j++){
            if(arr[j]<arr[end]){
                i++;
                swap(arr[i], arr[j]);
            }
        }
        i++;
        swap(arr[i], arr[end]);
        return i;
    }
};
int main(){
    Practice p;
    // int n;
    // cin>>n;
    // vector<int> arr;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    vector<int> arr = {5,5,5,5,5,7,6,98,65,43,2,34};
    // p.quickSort(arr, 0, arr.size()-1);
    vector<int> sortedArr = p.quickSort(arr);
    for(int i=0; i<sortedArr.size(); i++){
        cout<<arr[i]<<" ";
    }
}