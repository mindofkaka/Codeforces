#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    int a, b;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        
        if(a % b != 0){
            int c = a%b;
            cout << b-c << endl;
        }else{
            cout << "0" << endl;
        }
    }
}
