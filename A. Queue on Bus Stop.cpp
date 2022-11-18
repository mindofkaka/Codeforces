#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int bus(1), ppl(m);
    for(int i = 0; i < n; i++){
        if(ppl - a[i] >= 0){
        	ppl -= a[i];
        }else{
        	ppl = m;
        	bus++;
        	i--;
        }
    }
    cout << bus;
}
