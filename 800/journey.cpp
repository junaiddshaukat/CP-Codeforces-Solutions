// Problem Link : https://codeforces.com/contest/2051/problem/B

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int t = 0;
  cin>> t;
  
  int n,a,b,c;
  
  while(t--){
  	cin>>n>>a>>b>>c;
  	int sum = a+b+c;
  	 
  	 int d = n / sum*3;
  	 if(n%sum==0){
  	 	cout<<d<<endl;			
  	 }
  	 else if (n % sum <= a){
  	 	cout<<d+1<<endl;
  	 }
  	 else if(n % sum <= a + b){
  	 	cout<<d+2<<endl;
  	 }
  	 else{
  	 	cout<<d+3<<endl;
  	 }
  	 
  	
  }
  return 0;
}