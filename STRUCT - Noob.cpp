#include<iostream>
#include<iomanip>
using namespace std;
struct dados{
	int matricula;
	double nota1, nota2;
}aluno;
int main()
{
	cin>>aluno.matricula;
	cin>>aluno.nota1>>aluno.nota2;
	
	cout<<"\nMatricula do aluno: "<<aluno.matricula;
	cout<<fixed<<setprecision(2);
	cout<<"\nNota da primeira prova: "<<aluno.nota1;
	cout<<"\nNota da segunda prova: "<<aluno.nota2;
	cout<<"\nMedia: "<<(aluno.nota1+aluno.nota2)/2;
	return 0;
}
