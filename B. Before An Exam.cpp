#include <bits/stdc++.h>
using namespace std;

int main() {
	int d, sum;
	cin >> d >> sum;
	int mi[d+1], mx[d+1], mint = 0, maxt = 0;
	for(int i = 0; i < d; i++){
		cin >> mi[i] >> mx[i];
		mint+=mi[i];
		maxt+=mx[i];
	}
	if(mint > sum || maxt < sum){
		cout << "NO";
	}else{
		cout << "YES\n";
		int dif = sum-mint;
		for(int i = 0; i < d; i++){
			int tmp = min(mx[i]-mi[i], dif);
			cout << mi[i]+tmp << ' ';
			dif-=tmp;
		}
	}
}
