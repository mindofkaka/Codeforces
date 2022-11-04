#include <bits/stdc++.h>
using namespace std;

int N, catat[1001];
bool pernah[1001] = {false}, a1, a2;

void tulis(int kedalaman){
	if(kedalaman >= N){
		bool zigzag = true;
		for(int i = 1; i < N-1; i++){
			a1 = (catat[i]>catat[i-1]) && catat[i]>catat[i+1];
			a2 = (catat[i]<catat[i-1]) && catat[i]<catat[i+1];
			if(!(a1 || a2)){
				zigzag = false;
			}
		}
		if(zigzag == true){
			for(int i = 0; i < N; i++){
				cout << catat[i];
			}
			cout << "\n";
		}
		}else{
			for(int i = 1; i <= N; i++){
				if(!pernah[i]){
					pernah[i] = true;
					catat[kedalaman] = i;
					tulis(kedalaman+1);
					pernah[i] = false;
				}
			}
		}
	}

int main() {
	cin >> N;
	tulis(0);
}