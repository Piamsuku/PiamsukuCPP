#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int sum = n*(n+1) * 0.5;
    n-=1;
    while(n--){
       long long int temp;
       cin >> temp;
       sum -= temp;
    }
    cout << sum;
}
