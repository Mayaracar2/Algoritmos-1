#include<iostream>
#include<cstring>
using namespace std;
struct dados{
	char nome[51];
	int n1, n2, n3, n4;
}maromba[100];

int maisforte(dados atleta[], int natletas){
	int notamaior=0, posmaior;
	for(int j=0; j<natletas; j++){
		if(atleta[j].n1+atleta[j].n2+atleta[j].n3+atleta[j].n4>notamaior){
			notamaior=atleta[j].n1+atleta[j].n2+atleta[j].n3+atleta[j].n4;
			posmaior=j;
		}
	}
	return posmaior;
}

int main()
{
	int N, maiorpos;
	char nomemaior[51];
	cin>>N;
	for(int i=0; i<N; i++){
		cin.ignore();
		cin.getline(maromba[i].nome, 51);
		
		cin>>maromba[i].n1;
		cin>>maromba[i].n2;
		cin>>maromba[i].n3;
		cin>>maromba[i].n4;
		
	}
	maiorpos=maisforte(maromba, N);
	for(int k=0; k<N; k++){
		if(k==maiorpos)
			strcpy(nomemaior, maromba[k].nome);
	}
	cout<<"Vencedor: "<<nomemaior;
	return 0;
}
