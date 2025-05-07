#include<iostream>
using namespace std;
int main()
{
	int N, X[100], mais=0, menos=0;
	
	while(N<0 || N>1000)
		cin>>N;
	for(int i=1; i<=N; i++){
		cin>>X[i];
		if(X[i]>10000000)
			mais++;
		if(X[i]<10000000)
			menos++;
	}
	cout<<mais<<" video(s) com mais de 10M views"<<endl;
	cout<<menos<<" video(s) com menos de 10M views"<<endl;
	return 0;
}
