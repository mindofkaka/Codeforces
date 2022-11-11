#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool luck(int n){
    while(n > 0){
        if(n%10 != 4 && n%10 != 7){
            return false;
        }
        n /= 10;
    }
    return true;
}

int main(){
    int n; cin >> n;
    for(int i = 2; i <= n; i++){
        if(n%i == 0 && luck(i)){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
} 
