#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int tot = abs(a-b)*2;
        if(a > tot || b > tot || c > tot){
            cout << -1 << endl;
        }else{
            if(c <= tot/2){
                cout << c+(tot/2) << "\n";
            }else if(c > tot/2){
                cout << c-(tot/2) << "\n";
            }
        }
    }
}
