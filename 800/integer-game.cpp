// Problem Link : https://codeforces.com/problemset/problem/1899/A


#include <iostream>

using namespace std;

int main() {
       int t = 0;
       cin>>t;
       while(t--){
        int n;
        cin>>n;
        if(n%3){
            cout<<"First\n";
        }else{
            cout<<"Second\n";
        }
       }
    return 0;
}
