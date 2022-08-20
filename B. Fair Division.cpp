#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n, e, div;
		cin >> n;
		int one(0), sum(0);
		for(int i = 0; i < n; i++){
			cin >> e;
			if(e == 1){
				one++;
				sum++;
			}else{
				sum+=2;
			}
		}
		if(sum%2 == 0){
			div = sum/2;
			if(div%2 == 0){
				cout << "YES\n";
			}else{
				if(one){
					cout << "YES\n";
				}else{
					cout << "NO\n";
				}
			}
		}else{
			cout << "NO\n";
		}
		
	}
}