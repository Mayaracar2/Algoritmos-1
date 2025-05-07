#include<iostream>
using namespace std;
int main()
{
	double A[10][10];
	int N, M;
	
	cin>>N>>M;
	
	for(int i=0; i<N; i++)
		for(int j=0; j<M; j++)
			cin>>A[i][j];
	for(int i=0; i<N; i++){
		cout<<endl;
		for(int j=0; j<M; j++)
			cout<<A[i][j];
	}
			
	return 0;
}
