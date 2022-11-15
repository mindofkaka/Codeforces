#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[n+1], one(0), zer(0), zermax(-1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] == 1){
            one++;
            if(zer > 0){
                zer--;
            }
        }else{
            zer++;
            if(zer > zermax){
                zermax = zer;
            }
        }
    }
    cout << one + zermax;
}
