#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, m;
    cin >> n >> m;
    ll a[m+1], x(1), times(0);
    for(int i = 0; i < m; i++){
        cin >> a[i];
        if(a[i] < x){
            times+=n-x+a[i];
        }else{
            times+=a[i]-x;
        }
        x = a[i];
    }
    cout << times;
}
