#include<iostream>
using namespace std;
int FAT(int N){
	int soma=1;
	
	for(int i=N; i>1; i--){
		soma=soma*i;
	}
	
	return soma;
}
int main()
{
	int N, fatorial;
	
	cin>>N;
	while(N<0)
		cin>>N;
	
	fatorial=FAT(N);
	
	cout<<fatorial;
	return 0;
}
