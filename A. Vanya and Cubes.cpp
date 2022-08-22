#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, cube(0), tot(0);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cube += i;
        if(n >= cube){
            n -= cube;
            tot++;
        }
    }
    cout << tot;
}
