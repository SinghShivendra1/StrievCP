#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

int countAllDigits(int n){
    int count = 0;
    while(n>0){
        count+=1;
        n =n/10;
    }
    return count;
}

int reverse(int n) {
    long long revNum = 0;
    while (n != 0) {
        int digit = n % 10;
        revNum = revNum * 10 + digit;
         n /= 10;
    }
    if (revNum > INT_MAX || revNum < INT_MIN)
        return 0;

    return (int)revNum;
}

bool isPalindrome(int n){
    int temp = n;
    if(reverse(temp)==n){
        return true;
    }
    else{
        return false;
    }
}

int GCD(int N1, int N2){
    int gcd1 = 1;
    int min=N2;
    if(N2>N1){min=N1;}
    while(min>=1){
        if(N2%min==0 && N1%min==0){
            gcd1 = min;
            break;
        }
        min--;
    }
    return gcd1;
}

bool armStrong(int n){
    int numDigits = 0;
    int k,t = n;
    int power = n;
    while(t!=0){
        numDigits+=1;
        t = t/10;
    }
    int armstrongN = 0; 
    while(n!=0){
        int lastDigit = n%10;
        armstrongN = armstrongN + pow(lastDigit,numDigits);
        n = n/10;
    }
    if(armstrongN==k){return true;}else{return false;}
}

void printAllDevisors(int n){
    int temp = n;
    for(int k=1; k<=n/2; k++){
        if(n%k==0){
            cout<<k<<" ";
        }
    }
    cout << n;
}
// Optimal Approach
vector<int> getAllDevisors(int N){
    vector<int> devisors;
    for(int i = 1; i*i <= N; i++){
        if(N%i == 0){
            devisors.push_back(i);
            if(i!=N/i){
                devisors.push_back(N/i);
            }
        }
    }
    return devisors;
}

int main(){
    int N;
    cin>>N;
    // int count = countAllDigits(n);
    // cout<<count;

    // int revNum = reverse(-123);
    // cout<<revNum<<'\n';

    // bool isPali = isPalindrome(n);
    // cout<<isPali<<'\n';
    // int gcd = GCD(9,12);
    // cout<<gcd<<endl;

    // int t = armStrong(n);
    // cout<<t<<endl;
    // printAllDevisors(n);
    vector<int> devisors = getAllDevisors(N);
    sort(devisors.begin(), devisors.end());
    for(auto it : devisors){
        cout<<it<<" ";
    }
}