#include<iostream>
using namespace std;
int main()
{
	int N;
	double soma=0, X[100], Y[100], P[100];
	
	cin>>N;
	for(int i=1; i<=N; i++){
		cin>>X[i]>>Y[i];
		P[i]=X[i]*Y[i]*18;
		cout<<X[i]*Y[i]<<" m2"<<endl;
		cout<<P[i]<<" W"<<endl;
		soma+=P[i];
	}
	cout<<soma<<" W"<<endl;
	return 0;
}
