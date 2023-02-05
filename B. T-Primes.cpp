#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX = 1000001;
bool prime[MAX];

void sieve(){
	prime[0] = prime[1] = true;
	
	for(int i = 4; i < MAX; i+=2){
		prime[i] = true;
	}
	
	for(int i = 3; i*i <= MAX; i+=2){
		if(!prime[i]){
			for(int j = i*i; j < MAX; j+=2*i){
				prime[j] = true;
			}
		}
	}
}

int main() {
	sieve();
	ll x, r;
	int n; 
	cin >> n;
	while(n--){
		cin >> x;
		r = sqrt(x);
		if(!prime[r] && r*r == x) cout << "YES\n";
		else cout << "NO\n";
	}
}
