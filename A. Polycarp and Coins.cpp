#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		if(n%3 == 0){
			cout << n/3 << " " << n/3 << "\n";
		}else if(n%3 == 1){
			cout << n/3+1 << " " << n/3 << "\n";
		}else{
			cout << n/3 << " " << n/3+1 << "\n";
		}
	}
}