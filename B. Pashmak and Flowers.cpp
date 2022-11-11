#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n,b,min=0,max=pow(10,9),num1,num2,count1=0,count2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b;
		if(b==max)
			count1++;
		if(b<max)
		{
			max=b;
			count1=1;
		}
		if(b==min)
		    count2++;
		if(b>min)
		{
			min=b;
			count2=1;
		}
	}
		cout<<min-max<<" "<<((count1==count2&&max==min)?count1*(count1-1)/2:(count1*count2))<<endl;
}
