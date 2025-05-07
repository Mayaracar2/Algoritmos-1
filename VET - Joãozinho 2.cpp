#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int X[100], Y[100], N;
	double Z[100];
	char Op[100];
	
	cin>>N;
	for(int i=1; i<=N; i++)
		cin>>X[i];
	for(int j=1; j<=N; j++)
		cin>>Y[j];
	for(int k=1; k<=N; k++)
		cin>>Op[k];
	for(int l=1; l<=N; l++){
		switch(Op[l]){
			case '*':
				Z[l]=X[l]*Y[l];
				cout<<X[l]<<"x"<<Y[l]<<"="<<Z[l]<<endl;
				break;
			case '-':
				Z[l]=X[l]-Y[l];
				cout<<X[l]<<"-"<<Y[l]<<"="<<Z[l]<<endl;
				break;
			case '+':
				Z[l]=X[l]+Y[l];
				cout<<X[l]<<"+"<<Y[l]<<"="<<Z[l]<<endl;
				break;
			case '/':
				Z[l]=X[l]/Y[l];
				cout<<X[l]<<"/"<<Y[l]<<"="<<fixed<<setprecision(2)<<Z[l]<<endl;
				break;
				
		}
	}
	return 0;
}
