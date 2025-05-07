#include<iostream>
using namespace std;
int main()
{
	int A[102], X, i=0, cont=0;
	
	cin>>A[i];
	while(A[i]!=0){
		i++;
		cin>>A[i];
	}
    cin>>X;
    for(int j=0; j<i; j++){
		if(X==A[j]){
			cout<<"Elemento "<<X<<" encontrado na posicao "<<j<<endl;
			cont++;
		}
			
	}
	if(cont==0)
		cout<<"Elemento "<<X<<" nao foi encontrado"<<endl;
	return 0;
}
