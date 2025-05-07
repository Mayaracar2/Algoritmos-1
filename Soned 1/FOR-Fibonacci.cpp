#include<iostream>
using namespace std;
int main()
{
	int N, i;
	float X1=0, X2=1, X3;
	
	cin>>N;
	cout<<X1<<endl;
	cout<<X2<<endl;
	
	for(i=3; i<=N; i++){
		
		X3=X1+X2;
		cout<<X3<<endl;
		X1=X2;
		X2=X3;
	}
	
	return 0;
}
