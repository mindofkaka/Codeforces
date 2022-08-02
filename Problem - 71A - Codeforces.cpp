#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    string words;
    for(int i = 0; i < n; i++){
        cin >> words;
        
        int x = words.length();
        
        if(x <= 10){
            cout << words << endl;
        }else{
            cout << words[0] << x - 2 << words[x - 1] << endl;
        }
    }

    return 0;
}
