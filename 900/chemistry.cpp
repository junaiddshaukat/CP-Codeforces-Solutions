// Problem Link : https://codeforces.com/contest/1883/problem/B

#include <iostream>

int main(){

    const int B = 26;
    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, ks; std::cin >> n >> ks;
        
        std::string s; std::cin >> s;
        int ss[B] = {0};
        
        for(long p = 0; p < s.size(); p++)
        {++ss[s[p] - 'a'];}
        long cnt(0);
         for(long p = 0; p < B; p++)
         {cnt += ss[p] % 2;}
         
        puts(cnt <= ks + 1 ? "YES" : "NO");
    }

}