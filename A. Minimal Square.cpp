#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b;
        
        if(a > b){
            swap(a, b);
        }
        cout << max(2*a, b)*max(2*a, b) << endl;
    }
}
