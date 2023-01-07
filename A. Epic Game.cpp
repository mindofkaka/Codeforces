#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, n;
	cin >> a >> b >> n;
	int c = 0;
	while(n > 0){
		if(c%2 == 0){
			n -= __gcd(a, n);
		}else{
			n -= __gcd(b, n);
		}
		c++;
	}
	if(c%2 == 1){
		cout << "0\n";
	}else{
		cout << "1\n";
	}
}
