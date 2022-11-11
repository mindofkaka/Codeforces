#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int ans = max(max(max(a+b*c, a+b+c), a*(b+c)), max(a*b*c, max((a+b)*c, a*b+c)));
    cout << ans;
} 
