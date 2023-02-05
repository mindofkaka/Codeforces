#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int c[3] = {0};
		for(int i = 0; i < n; i++){
			int a;
			cin >> a;
			++c[a%3];
		}
		int count = 0, carry = 0;
		for(int i = 0; i < 10; i++){
			count+=carry;
			c[i%3]+=carry;
			carry = 0;
			if(c[i%3] > n/3){
				int diff = c[i%3]-n/3;
				carry+=diff;
				c[i%3]-=diff;
			}
		}
		cout << count << "\n";
	}
}
