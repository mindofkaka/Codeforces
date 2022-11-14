#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int x, count(0); 
    cin >> x;
    while(x/2 != 0){
        if(x%2 == 1) count++;
        x/=2;
    }
    cout << count+1;
}
