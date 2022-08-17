#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b;
        
        int x = a*60;
        int y = b*1;
        int sum = 1440-x-y;
        cout << sum << "\n";
    }
}
