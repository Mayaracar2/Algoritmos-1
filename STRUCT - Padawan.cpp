#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
struct dados{
	char nome[51];
	int pontos;
} padawan[1000];
int main()
{
	int maior=0, N;
	double soma=0;
	char melhor[51];
	
	cin>>N;
	while(N<1 || N>1000)
		cin>>N;
	
	for(int i=1; i<=N; i++){
		cin.ignore();
		cin.getline(padawan[i].nome, 51);
		cin>>padawan[i].pontos;
		soma+=padawan[i].pontos;
		if(padawan[i].pontos>maior){
			maior=padawan[i].pontos;
			strcpy(melhor, padawan[i].nome);
		}
	}
	cout<<"\nPadawan com mais pontos: "<<melhor;
	cout<<"\nPontos: "<<maior;
	cout<<fixed<<setprecision(2)<<"\nMedia da turma: "<<soma/N<<" pontos";
	
	return 0;
}
