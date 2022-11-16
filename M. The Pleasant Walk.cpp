#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    int a[n+1], tmp = 0, mx(-1), count(0);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(i > 1 && a[i-1] != a[i]){
            count++;
        }else if(i > 1 && a[i-1] == a[i]){
            count = 0;
        }
        mx = max(mx, count);
    }
    cout << mx+1;
}
