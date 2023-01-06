#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	while(t--){
		ll a, b, c = 0;
		cin >> a >> b;
		if(a == b){
			cout << "0\n";
			continue;
		}
		if(a > b){
			while(a > b){
				if(a%8 == 0 && a/8 >= b){
					a/=8;
					c++;
				}else if(a%4 == 0 && a/4 >= b){
					a/=4;
					c++;
				}else if(a%2 == 0 && a/2 >= b){
					a/=2; 
					c++;
				}else{
					break;
				}
			}	
		}else{
			while(b > a){
				if(b%8 == 0 && b/8 >= a){
					b/=8;
					c++;
				}else if(b%4 == 0 && b/4 >= a){
					b/=4;
					c++;
				}else if(b%2 == 0 && b/2 >= a){
					b/=2;
					c++;
				}else{
					break;
				}
			}
		}
		if(a == b) cout << c << "\n";
		else cout << "-1\n";
	}
}
