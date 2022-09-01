#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int m = n/2;
    cout << m << "\n";
    if(n%2==0){
        for(int i = 0; i < m; i++) cout << "2 ";
    }else{
        for(int i = 0; i < m-1; i++) cout << "2 ";
        cout << 3;
    }
}
