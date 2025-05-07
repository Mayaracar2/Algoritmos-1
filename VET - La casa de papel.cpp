#include<iostream>
using namespace std;
int main()
{
	int N, X[1000], bom=0, ruim=0;
	
	cin>>N;
	for(int i=1; i<=N; i++){
		cin>>X[i];
		while(X[i]!=1 && X[i]!=-1)
			cin>>X[i];
		if(X[i]==1)
			bom++;
		if(X[i]==-1)
			ruim++;	
	}
	if(bom>ruim)
		cout<<"A maioria gostou"<<endl;
	if(ruim>bom)
		cout<<"A maioria nao gostou"<<endl;
	if(ruim==bom)
		cout<<"Deu empate"<<endl;
	return 0;
}
