#include <bits/stdc++.h>

using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int temp;
            cin >> temp;
            if(temp){
                cout << abs(i-2) + abs(j-2);
                break;
            }
        }
    }
}