#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int c1= 0, c2 =0;
    for(int i = 0; i < n; i++){
        char c; cin >> c;
        if(c == 'z')c2++;
        if(c == 'n')c1++;
    }
    while(c1--) cout << 1 << ' ';
    while(c2--) cout << 0 << ' ';
}