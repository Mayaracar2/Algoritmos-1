#include<iostream>
using namespace std;
int main()
{
	int N, i=1;
	double soma=0, X[100], Y[100], P[100];
	
	cin>>N;
	while(i<=N){
		cin>>X[i]>>Y[i];
		P[i]=X[i]*Y[i]*18;
		cout<<P[i]/18<<" m2"<<endl;
		cout<<P[i]<<" W"<<endl;
		soma+=P[i];
		i++;
	}
	cout<<soma<<" W"<<endl;
	return 0;
}
