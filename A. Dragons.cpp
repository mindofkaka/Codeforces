#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin >> s >> n;
    bool isTrue = true;
    pair<int, int> a[1005];
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        if(s <= a[i].first){
            isTrue = false;
            break;
        }else{
            s += a[i].second;
        }
    }
    if(isTrue) cout << "YES\n";
    else cout << "NO\n";
}
