#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    vector<long long int> v1(3,0);
    cin >> n;
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;
        v1[0] += a;
        v1[1] += b;
        v1[2] += c;
    }
    bool ch = false;
    for(auto i : v1)if(i)ch=true;

    if(ch) cout << "NO";
    else cout << "YES";


}