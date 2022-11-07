#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x; 
        cin >> n;
        set<int, greater<int> > arr;
        for(int i = 0; i < n; i++){
            cin >> x;
            arr.insert(x);
        }
        cout << arr.size() << "\n";
    }
}
