#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char cidade[5][51];
	
	cout<<"Digite o nome da cidades: "<<endl;
	
	for(int i=0; i<5; i++)
		cin.getline(cidade[i], 51);
	cout<<endl<<"Nome das cidades: "<<endl;
	for(int j=0; j<5; j++)
		cout<<cidade[j]<<endl;
	return 0;
}
