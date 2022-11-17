#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        ll z = a*b*2;
        ll y = z-a;
        if(b==1){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            cout << a << " " << y << " " << z << "\n";
        }
    }
}
