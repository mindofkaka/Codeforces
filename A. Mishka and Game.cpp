#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m, c, mpoint(0), cpoint(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m >> c;
        if(m == c){
            mpoint++;
            cpoint++;
        }else if(m > c){
            mpoint++;
        }else{
            cpoint++;
        }
    }
    if(mpoint == cpoint){
        cout << "Friendship is magic!^^\n";
    }else if(mpoint > cpoint){
        cout << "Mishka\n";
    }else{
        cout << "Chris\n";
    }
}
