#include<iostream>
#include<iomanip>
using namespace std;
float media(int n[], int alunos){
	float soma=0;
	for(int j=0; j<alunos; j++)
		soma+=n[j];
	return soma/alunos;
}
int acima(int n[], int alunos, float media){
	int cont=0;
	for(int k=0; k<alunos; k++)
		if(n[k]>media)
			cont++;
	return cont;
}
int abaixo(int n[], int alunos, float media){
	int cont=0;
	for(int k=0; k<alunos; k++)
		if(n[k]<media)
			cont++;
	return cont;
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
	cout<<fixed<<setprecision(2)<<"Media da turma = "<<m<<endl;
	cout<<"Alunos com nota abaixo da media: "<<abaixo(notas, N, m)<<endl;
	cout<<"Alunos com nota acima da media: "<<acima(notas, N, m)<<endl;
	return 0;
}
