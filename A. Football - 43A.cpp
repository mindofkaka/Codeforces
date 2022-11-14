#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string s, tmp, s1, s2;
    int count1(1), count2(0);
    for(int i = 0; i < n; i++){
        cin >> s;
        if(i == 0) s1 = s;
        if(s == s1){
            count1++;
        }else{
            count2++;
            s2 = s;
        }
    }
    if(count1 > count2) cout << s1;
    else cout << s2;
}
