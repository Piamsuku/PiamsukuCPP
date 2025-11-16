#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007
#define int long long 


int32_t main(){
    int n;
    cin >> n;
    int dp[n+1] = {};
    dp[0] = 1;
    for(int i = 1; i <=n ;i++){
        for(int j =1; j<=6 && j<=i; j++){
            dp[i] = (dp[i] + dp[i-j])%mod;
        }
    }
    cout << dp[n];
}