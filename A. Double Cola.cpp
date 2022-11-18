#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int r = 1;
	while(r*5 < n){
		n -= r*5;
		r *= 2;
	}
	string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	cout << names[(n-1)/r];
}
