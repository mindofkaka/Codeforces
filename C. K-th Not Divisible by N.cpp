#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int x = k/(n-1);
        
        int y = k-x*(n-1);
        if(y){
            cout << n*x+y << "\n";
        }else{
            cout << n*x-1 << "\n";
        }
    }
}
