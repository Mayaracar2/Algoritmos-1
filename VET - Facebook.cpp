#include<iostream>
using namespace std;
int main()
{
	int N, maior=-999, menor=999;
	
	while(N<0 || N>1000){
		cin>>N;
	}

	int X[N];

	for(int i=0; i<N; i++){
		cin>>X[i];
		if(X[i]>maior)
			maior=X[i];
		if(X[i]<menor)
			menor=X[i];
	}
	cout<<"Menor numero de contatos: "<<menor<<endl;
	cout<<"Maior numero de contatos: "<<maior<<endl;
	return 0;
}
