#include<iostream>
using namespace std;
int main()
{
    char CC[51][51];
	int N, M;
	
	cin>>N;
	cin>>M;
	for(int i=0; i<N; i++)
		for(int j=0; j<M; j++)
			cin>>CC[i][j];
    for(int i=0; i<M; i++)
		for(int j=0; j<N; j++)
			cout<<CC[j][i];
	return 0;
}	
