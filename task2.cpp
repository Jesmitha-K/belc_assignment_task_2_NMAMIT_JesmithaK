#include<iostream>
#include<algorithm>

using namespace std;

string get_crease(int n,int x){
    string init="V";
    for(int i=1;i<n;i++){
        string prev=init;
        reverse(prev.begin(),prev.end());
        for(int j=0;j<prev.length();j++){
            if(prev[j]=='V'){
             prev[j]='M';
            }
            else{
             prev[j]='V';
        }
    }
        init=init+"V"+prev;
    }
    if (init[x - 1] == 'V')
        return "Valley";
    else
        return "Mountain";
}



// int main(){
//     string init="V";
//     int n,x;
//     cin >> n;
//     cin >> x;
//     for(int i=1;i<n;i++){
//         string prev=init;
//         reverse(prev.begin(),prev.end());
//         for(int j=0;j<prev.length();j++){
//             if(prev[j]=='V'){
//              prev[j]='M';
//             }
//             else{
//              prev[j]='V';
//         }
//     }
//         init=init+"V"+prev;
//     }
//     cout<<init[x-1]<<endl;
//     return 0;
// }
