#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[10], sum = 0;
	for(int i = 0; i < 6; i++){
		cin >> a[i];
		sum+=a[i];
	}
	for(int i = 0; i < 4; i++){
		for(int j = i+1; j < 5; j++){
			for(int k = j+1; k < 6; k++){
				if(a[i]+a[j]+a[k] == sum-a[i]-a[j]-a[k]){
					cout << "YES";
					return 0;
				}
			}
		}
	}
	cout << "NO";
}
