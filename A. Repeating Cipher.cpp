#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	string t; 
	cin >> n >> t;
	int count = 0;
	for(int i = 0; i < n; i+=count){
		cout << t[i+count];
		count++;
	}
}
