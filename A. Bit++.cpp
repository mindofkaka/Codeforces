#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string X1 = "X++", X2 = "++X", X3 = "X--", X4 = "--X";
    string statement;
    int result = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> statement;
        
        if (statement == X1 || statement == X2){
            result++;
        } else if (statement == X3 || statement == X4){
            result--;
        }
    }
    
    cout << result << endl;
    
    return 0;
}
