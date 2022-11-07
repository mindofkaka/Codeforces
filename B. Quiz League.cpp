#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 1; i <= n; i++) cin >> a[i];
    if(a[k] == 1) cout << k;
    else{
        bool odd = false;
        for(int i = k; i <= n; i++){
            if(a[i] == 1){
                cout << i;
                odd = true;
                break;
            }
        }
        if(odd == false){
            for(int i = 1; i <= k; i++){
                if(a[i] == 1){
                    cout << i;
                    break;
                }
            }
        }
    }
}
