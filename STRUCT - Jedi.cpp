#include<iostream>
#include<cstring>
using namespace std;
struct dados{
	char nome[51];
	int base;
}jedi[1000];
int main()
{
	int N, cont=0;
	char procurado[51];
	
	cin>>N;
	while(N<1 || N>1000)
		cin>>N;
	for(int i=1; i<=N; i++){
		cin.ignore();
		cin.getline(jedi[i].nome, 51);
		cin>>jedi[i].base;
	}
	cin.ignore();
	cin.getline(procurado, 51);
	for(int j=1; j<=N; j++){
		if(strcmp(procurado, jedi[j].nome)==0){
			cout<<"\nEste cavaleiro esta na base "<<jedi[j].base;
			cont++;
		}
			
	}
	if(cont==0)
		cout<<"\nEste cavaleiro nao esta cadastrado";
	return 0;
}
