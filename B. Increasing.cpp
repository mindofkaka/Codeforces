#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+1];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        bool inc = true;
        for(int i = 1; i < n; i++){
            if(a[i-1] == a[i]){
                inc = false;
                break;
            }
        }
        if(inc){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
