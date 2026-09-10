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
    while(n!=0){
        int digit = n%10;
        revNum = revNum*10 + digit;
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

int armStrong(int n){

}
int main(){
    // int n;
    // cin>>n;
    // int count = countAllDigits(n);
    // cout<<count;

    int revNum = reverseNumber(-123);
    cout<<revNum<<'\n';

    // bool isPali = isPalindrome(n);
    // cout<<isPali<<'\n';
    // int gcd = GCD(9,12);
    // cout<<gcd<<endl;
}