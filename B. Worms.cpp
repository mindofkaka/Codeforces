#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n+1], sum(0), count[n+1];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        count[i] = sum;
    }
    int ind = 0, worms[sum+1], m, q;
    for(int i = 1; i <= sum; i++){
        if(i > count[ind]){
            ind++;
        }
        worms[i] = ind+1;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> q;
        cout << worms[q] << "\n";
    }
} 
