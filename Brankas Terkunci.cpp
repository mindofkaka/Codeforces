#include <bits/stdc++.h>
using namespace std;

int N, K, catat[1001];
void tulis(int kedalaman){
	if(kedalaman >= K){
		for(int i = 1; i < K+1; i++){
			cout << catat[i] << " ";
		}
		cout << "\n";
	}else{
		for(int i = catat[kedalaman]+1; i <= N; i++){
			catat[kedalaman+1] = i;
			tulis(kedalaman + 1);
		}
	}
}

int main() {
	cin >> N >> K;
	tulis(0);
}