#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		bool a = true;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		for(int i = 1; i < n; i++){
			if(arr[i]-arr[i-1] > 1){
				a = false;
				break;
			}
		} 
		if(a == true) cout << "YES\n";
		else cout << "NO\n";
	}
}