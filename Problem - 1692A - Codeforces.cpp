#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int sum(0);
    if(a < b){
        sum++;
    }
    if(a < c){
        sum++;
    }
    if(a < d){
        sum++;
    }
    cout << sum << endl;
    }
}
