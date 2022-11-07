#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(b == c){
            for(int i = 0; i < 3; i++) cout << b << " ";
        }else{
            cout << b << " " << c << " " << c;
        }
        cout << "\n";
    }
}
