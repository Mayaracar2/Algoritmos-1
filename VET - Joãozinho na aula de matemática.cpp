#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int N, X[10];
	
	cout<<"Digite um número:";
	cin>>N;
	while(N>1000){
		cout<<"Número muito grande! Digite novamente:";
		cin>>N;
	}
	for(int i=0; i<=10; i++){
		X[i]=N*i;
		cout<<N<<" X "<<i<<" = "<<X[i]<<endl;
	}
	return 0;
}
