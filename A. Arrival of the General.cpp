#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, e, big(0), bigi(0), small(101), smalli(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> e;
        if(e > big){
            big = e;
            bigi = i;
        }
        if(e <= small){
            small = e;
            smalli = i;
        }
    }
    if(bigi > smalli){
        cout << bigi + (n-smalli-2) << "\n";
    }else{
        cout << bigi + (n-smalli-1) << "\n";
    }
}
