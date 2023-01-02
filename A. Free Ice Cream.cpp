#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, d, res = 0;
	char a;
	cin >> n >> x;
	while(n--){
		cin >> a >> d;
		if(a == '+'){
			x += d;
		}else{
			if(d > x){
				res++;
			}else{
				x -= d;
			}
		}
	}
	cout << x << " " << res;
}
