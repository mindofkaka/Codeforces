#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m; 
    cin >> n >> m;
    
    int x = n;
    if(n%2 == 1) x++;
    x /= 2;
    for(int i = x; i <= n; i++){
        if(i%m == 0){
            cout << i;
            return 0;
        }
    }
    cout << -1;
}
