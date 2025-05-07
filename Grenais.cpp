#include<iostream>
using namespace std;
int main()
{
	int X, Y, Z, Inter=0, Gremio=0, Empate=0, Grenal=0;
	
	do{
		cin>>X>>Y;
		if(X>Y)
			Inter++;
		if(X<Y)
			Gremio++;
		if(X==Y)
			Empate++;
		cout<<"Novo grenal (1-sim 2-nao)"<<endl;
		Grenal++;
		cin>>Z;
	}
	while(Z==1 && Z!=2);
	cout<<Grenal<<" grenais"<<endl;
    cout<<"Inter:"<<Inter<<endl;
    cout<<"Gremio:"<<Gremio<<endl;
    cout<<"Empates:"<<Empate<<endl;
    if(Inter>Gremio)
    	cout<<"Inter venceu mais"<<endl;
    if(Gremio>Inter)
    	cout<<"Gremio venceu mais"<<endl;
    if(Gremio==Inter)
    	cout<<"Nao houve vencedor"<<endl;
	return 0;
}
