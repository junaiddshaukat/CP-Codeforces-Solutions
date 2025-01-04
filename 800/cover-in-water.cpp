// Problem Link : https://codeforces.com/problemset/problem/1900/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    if (!inFile && !outFile)
    {
        cerr << "Error opening files." << endl;
        return 1;
    }
    cin.rdbuf(inFile.rdbuf());
    cout.rdbuf(outFile.rdbuf());
#endif

int t;
cin >> t;
while (t--) {
    int n;
    cin >> n;
    string name;
    cin >> name;
    int cnt = 0;
    int ans = 0;
    bool isThree = false;
    for (char ch : name) {
        if (ch == '.') {
            cnt++;
            ans++;
        } else {
            cnt = 0;
        }
        if (cnt == 3) {
            isThree = true;
            break;
        }
    }
    if (isThree) {
        cout << 2 << endl;
    } else {
        cout << ans << endl;
    }
}
return 0;
}

