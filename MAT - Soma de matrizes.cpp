#include<iostream>
using namespace std;
int main()
{
	double mat1[100][100], mat2[100][100];
	int N, M;
	
	cin>>N;
	cin>>M;
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++)
			cin>>mat1[i][j];
	}
	for(int k=0; k<N; k++){
		for(int l=0; l<M; l++)
			cin>>mat2[k][l];
	}
	for(int m=0; m<N; m++){
		cout<<endl;
		for(int n=0; n<M; n++)
			cout<<mat1[m][n]+mat2[m][n]<<" ";
	}
			
	return 0;
}
