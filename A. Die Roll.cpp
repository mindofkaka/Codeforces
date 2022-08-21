#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int y, w, count(0);
    cin >> y >> w;
    int c = max(y, w);
    for(int i = c; i <= 6; i++){
        count++;
    }
    int gcd = __gcd(count, 6);
    int x = count/gcd;
    int z = 6/gcd;
    cout << x << "/" << z << "\n";
}
