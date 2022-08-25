#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; 
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;
    cin >> n;
    int arr[n], pr(0), ma(0),pe(0);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] == 1){
            pr++;
            v1.push_back(i);
        }else if(arr[i] == 2){
            ma++;
            v2.push_back(i);
        }else{
            pe++;
            v3.push_back(i);
        }
    }
    int x = min(pr, min(ma, pe));
    cout << x << "\n";
    for(int i = 0; i < x; i++){
        cout << v1[i] << " " << v2[i] << " " << v3[i] << "\n";
    }
}



