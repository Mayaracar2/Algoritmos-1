#include<iostream>
using namespace std;
int main()
{
	int N, X, A=0, B=0, C=0, i=0;
	
	cin>>N;
	while(i<=N){
		cin>>X;
		while(X!=1 && X!=2 && X!=3)
			cin>>X;
		if(X==1)
			A++;
		if(X==2)
			B++;
		if(X==3)
			C++;
	}
	cout<<A<<" ";
	cout<<B<<" ";
	cout<<C;
	return 0;
}
