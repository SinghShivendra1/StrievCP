#include<bits/stdc++.h>
using namespace std;

// int main(){
//     /* Take a day no at input and give corresponding days*/

//     int day;
//     cin>>day;

//     switch(day){
//         case 1:
//             cout<<"Monday";
//         case 2:
//             cout<<"Tue";
//         case 3:
//             cout<<"Wed";
//         case 4:
//             cout<<"Thu";
//         case 5:
//             cout<<"Fri";
//         case 6:
//             cout<<"Sat";
//         case 7:
//             cout<<"sun";
//     }
// }
// Output of above : MondayTueWedThuFriSatsun

int main(){
    /* Take a day no at input and give corresponding days*/

    int day;
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tue";
            break;
        case 3:
            cout<<"Wed";
            break;
        case 4:
            cout<<"Thu";
            break;
        case 5:
            cout<<"Fri";
            break;
        case 6:
            cout<<"Sat";
            break;
        case 7:
            cout<<"sun";
            break;
        default:
            cout<<"Invalid";
    }
}