#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll digitSum(int a){
	ll sum = 0;
	
	while(a > 0){
		sum += a%10;
		a /= 10;
	}
	return sum;
}	
 
int main() {
	int k, count = 0; 
	cin >> k;
	
	for(ll i = 19; i <= k*k*19; i+=9){
		if(digitSum(i) == 10){
			count++;
			if(count == k){
				cout << i;
				return 0;
			}
		}
	}
}
