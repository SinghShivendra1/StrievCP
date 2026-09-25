#include<iostream>
// #include <cmath>
#include<vector>
#include<algorithm>
// #include<unordered_map>
using namespace std;

class Sorting{
    public:

    void quickSort(vector<int>& arr, int start, int end){
        if(end<=start) return;
        int pivot = partition(arr, start, end);
        quickSort(arr, start, pivot-1);
        quickSort(arr, pivot+1, end);
    }

    int partition(vector<int>& arr, int start, int end){
        int randomIndex = start + rand() % (end - start + 1);
        swap(arr[randomIndex], arr[end]);
        int pivot = arr[end];
        int i = start-1;
        for(int j = start; j<=end-1; j++){
            if(arr[j]<arr[end]){
                i++;
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        i++;
        int temp = arr[end];
        arr[end] = arr[i];
        arr[i] = temp;
        return i; 
    }

};

int main(){
    Sorting s;
    vector<int> arr = {8,2,4,7,1,3,9,6,5};
    s.quickSort(arr,0,8);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}