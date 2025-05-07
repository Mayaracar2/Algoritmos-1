#include<iostream>
#include<cstring>
using namespace std;
struct dados{
	char nome[51];
}cidade[5];
int main()
{
	
	cout<<"Digite o nome da cidades: "<<endl;
	
	for(int i=0; i<5; i++)
		cin.getline(cidade[i].nome, 51);
	
	cout<<endl<<"Nome das cidades: "<<endl;
	
	for(int j=0; j<5; j++)
		cout<<cidade[j].nome<<endl;
	
	return 0;
}
