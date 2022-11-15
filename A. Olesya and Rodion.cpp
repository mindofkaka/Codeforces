#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, t; 
    cin >> n >> t;
    
    int dec = 0, a = t;
    while(a > 0){
        a /= 10;
        dec++;
    }
    if(dec > n){
        cout << -1;
        return 0;
    }
    if(t == 10){
        for(int i = 1; i < n; i++){
            cout << 1;
        }
        cout << 0;
        return 0;
    }
    for(int i = 0; i < n; i++){
        cout << t;
    }
}
