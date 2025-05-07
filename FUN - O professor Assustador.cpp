#include<iostream>
#include<iomanip>
using namespace std;
float media(int n[], int alunos){
	float soma=0;
	for(int j=0; j<alunos; j++)
		soma+=n[j];
	return soma/alunos;
}
int main()
{
	int notas[100], N;
	float m;
	cin>>N;
	while(N<=0 || N>100)
		cin>>N;
	for(int i=0; i<N; i++)
		cin>>notas[i];
	m=media(notas, N);
	cout<<fixed<<setprecision(2)<<"Media da turma = "<<m;
	return 0;
}
