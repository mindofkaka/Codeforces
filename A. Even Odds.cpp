#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;
    
    ll x(0), ans(0);
    if(n%2 == 0){
        x = n/2;
        if(k<x || k==x){
            ans = ((k-1)*2)+1;
        }else{
            ans = (k-x)*2;
        }
    }else{
        x = (n+1)/2;
        if(k<x || k==x){
            ans = ((k-1)*2)+1;
        }else{
            ans = (k-x)*2;
        }
    }
    cout << ans << endl;
}
