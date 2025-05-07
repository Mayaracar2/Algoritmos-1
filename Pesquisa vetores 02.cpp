#include<iostream>
using namespace std;
int main()
{
	int A[11], N, X, cont=0;
	
	cin>>N;
	while(N>10 || N<0)
		cin>>N;
	for(int i=1; i<=N; i++){
		cin>>A[i];
	}
	cin>>X;
	for(int j=1; j<=N; j++){
		if(X==A[j])
			cont++;
	}
	if(cont==0)
		cout<<"Valor nao pertence ao vetor";
	else
		cout<<"Valor pertence ao vetor";
	
	return 0;
}
