#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int c = a-b;
        if(c<0){
            if(c%2!=0) cout << "1\n";
            else cout << "2\n";
        }else if(c>0){
            if(c%2!=0) cout << "2\n";
            else cout << "1\n";
        }else{
            cout << "0\n";
        }
    }
}
