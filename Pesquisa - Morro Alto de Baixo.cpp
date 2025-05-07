#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char codigo[5], T, F;
	int cont=0, C=0, R=0, E=0, S=0, O=0;
	
	do{
		cin.getline(codigo, 4);
		cin>>T>>F;
		cont++;
		if(T=='C')
			C++;
		if(T=='R')
			R++;
		if(F=='E')
			E++;
		if(F=='S')
			S++;
		if(F=='O')
			O++;
	}
	while(strcmp(codigo, "0000")==0);
	cout<<cont<<endl;
    cout<<(C*100.0)/cont<<"%"<<" da população utiliza a energia para fins comerciais"<<endl;
    cout<<(R*100.0)/cont<<"%"<<" da população utiliza a energia nas suas residencias"<<endl;
    cout<<(E*100.0)/cont<<"%"<<" da população utiliza energia eletrica"<<endl;
    cout<<(S*100.0)/cont<<"%"<<" da população utiliza energia solar"<<endl;
    cout<<(O*100.0)/cont<<"%"<<" da população utiliza outros tipo de energia"<<endl;
    
	return 0;
}
