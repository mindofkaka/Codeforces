#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int p, v, t;
    int score = 0;
    for(int i = 0; i < n; i++){
        cin >> p >> v >> t;
        
        if(p + v + t >= 2){
        score++;
        }
    }
    
    cout << score;

    return 0;
}
