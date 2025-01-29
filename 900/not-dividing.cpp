// Problem Link : https://codeforces.com/problemset/problem/1794/B


#include <bits/stdc++.h>


using namespace std;
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	for(int testcases = 0; testcases < t; testcases++){

		int num; cin >> num;

		vector <int> a(num);


		for(int i = 0; i < num; i++){
			cin >> a[i];
		}
		for(int i = 0; i < num; i++){
			if(a[i] == 1){
				a[i]++;
			}
		}
		for(int i = 1; i < num; i++){

			if(a[i] % a[i - 1] == 0){
				a[i]++;
			}
		}
		for(auto i : a){
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}