#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int a; cin >> a;
        if(360 % (180-a) == 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
