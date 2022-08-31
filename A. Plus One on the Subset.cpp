#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; 
    cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int min = 1e9+7, max = 0;
        for(int i = 0; i < n; i++){
            if(min > a[i]) min = a[i];
        }
        for(int i = 0; i < n; i++){
            if(max < a[i]) max = a[i];
        }
        cout << max-min << "\n";
    }
}
