#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n, sum1(0), sum2(0); 
		cin >> n;
		if(n%4 != 0){
			cout << "NO\n";
		}else{
			cout << "YES\n";
			for(int i = 1; i <= n; i++){
				if(i%2 == 0){
				cout << i << " ";
				sum1 += i;
				}
			}
			for(int i = 1; i <= n-2; i++){
				if(i%2 != 0){
					cout << i << " ";
					sum2 += i;
				}
			}
			cout << sum1-sum2 << "\n";
			}
	}
}