#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int x;
//     cin>>x;

//     if(x < 25){
//         cout<<"F";
//     }
//     if(x>=25 && x<=44){
//         cout<<"E";
//     }
//     if(x>=45 && x <=49){
//         cout<<"D";
//     }
//     if(x>=50 && x<= 59){
//         cout<<"C";
//     }
// }

/*All four conditions are evaluated one after another, 
because you used separate if statements.
You could also write this as an if / else if chain
Here(In if else), once one condition is true, the remaining conditions are not checked.*/

int main(){
    int x;
    cin>>x;

    if(x < 25){
        cout<<"F";
    }
    else if(x<=44){
        cout<<"E";
    }
    else if(x<=49){
        cout<<"D";
    }
    else if(x<= 59){
        cout<<"C";
    }
}