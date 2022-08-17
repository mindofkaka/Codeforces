#include <bits/stdc++.h>
using namespace std;

int main(){
    int a; cin >> a;
    int count = 0;
    
    string stone; cin >> stone;
    
    for(int i = 0; i < a; i++){
        if(stone[i] == stone[i + 1]){
            count++;
        }
    }
    cout << count;
}
