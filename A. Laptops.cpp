#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(a != b){
            cout << "Happy Alex\n";
            return 0;
        }
    }
    cout << "Poor Alex\n";
}
