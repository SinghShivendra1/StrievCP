#include<iostream>
using namespace std;

int countAllDigits(int n){
    int count = 0;
    while(n>0){
        count+=1;
        n =n/10;
    }
    return count;
}

int reverseNumber(int n){
    int revNum=0;
    while(n>0){
        int digit = n%10;
        revNum += digit;
        revNum *= 10;
        n = n/10;
    }
    return revNum/10;
}

bool isPalindrome(int n){
    int temp = n;
    if(reverseNumber(temp)==n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    // int count = countAllDigits(n);
    // cout<<count;

    // int revNum = reverseNumber(n);
    // cout<<revNum<<'\n';

    // bool isPali = isPalindrome(n);
    // cout<<isPali<<'\n';
}