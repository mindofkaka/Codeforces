#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int arr[n+1], a(0), b(0), c(0), d(0), count(0);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == 1) a++;
        else if(arr[i] == 2) b++;
        else if(arr[i] == 3) c++;
        else if(arr[i] == 4) d++;
    }
    count+=d;
    if(c<a){
        count+=c;
        a-=c;
        c-=c;
    }else if(a<=c){
        count+=a;
        c-=a;
        a-=a;
    }
    
    if(c>0){
        count+=c;
        c=0;
    }
    
    if(b>0){
        count+=b/2;
        b=b%2;
    }
    
    int left = a+(b*2);
    if(left<=4 && left > 0){
        count+=1;
    }else if(left%4 != 0){
        count+=left/4+1;
    }else{
        count+=left/4;
    }
    cout << count;
} 









