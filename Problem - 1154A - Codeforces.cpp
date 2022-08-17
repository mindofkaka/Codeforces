#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll arr[4];
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+4);
    ll x = arr[3]-arr[0];
    ll y = arr[3]-arr[1];
    ll z = arr[3]-arr[2];
    
    cout << y << " " << z << " " << x;
}
