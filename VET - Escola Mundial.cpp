#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int N, cima=0, baixo=0;
	double X[100], soma=0;
	
	cin>>N;
	for(int i=1; i<=N; i++){
		cin>>X[i];
		soma+=X[i];
	}
	cout<<fixed<<setprecision(2)<<"Media da turma: "<<soma/N<<endl;
	for(int j=1; j<=N; j++){
		if(X[j]>soma/N)
			cima++;
		if(X[j]<soma/N)
			baixo++;
	}
	cout<<"Alunos com nota acima da media: "<<cima<<endl;
	cout<<"Alunos com nota abaixo da media: "<<baixo<<endl;
	return 0;
}
