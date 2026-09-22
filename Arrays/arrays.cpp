#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    int sumArrayElements(int arr[], int n){
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        return sum;
    }

    int countOdd(int arr[], int n){
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){continue;}
            else{count++;}
        }
        return count;
    }

    bool arraySortedOrNot(int arr[], int n) {
        for(int i=0; i<n-1; i++){
            if(arr[i] <= arr[i+1]){continue;}
            else{return false;}
        }
        return true;
    }
//     Here it is!
// You checked Case #1—that’s a valid move. Now try rebuilding the solution on 
// your own and see how much you’ve already understood

    void reverseArray(int arr[], int n){
        int i=0; int j = n-1;
        while(i<j){
            // int temp = arr[i];
            // arr[i] = arr[j];
            // arr[j] = temp;
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};



int main(){
    Solution obj;
    // int arr[] = {5,4,6,7,8};
    int arr[] = {1,2,3,4,5};
    // cout<<"Array Sum: "<<obj.sumArrayElements(arr, 5);
    // cout<<"Total Odd ele in array : "<<obj.countOdd(arr, 5);
    // cout<<"Array is Sorted : "<<obj.arraySortedOrNot(arr, 5);
    obj.reverseArray(arr, 5);
    for(auto it:arr){
        cout<<it<<" ";
    }
}