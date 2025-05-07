#include<iostream>
#include<iomanip>
using namespace std;
struct dados{
	int identificacao;
	double IM, FA;
}stormtroopers;
int main(){
	
	double GA=0;
	int melhor;
	
	cin>>stormtroopers.identificacao;
	do{
		
		cin>>stormtroopers.IM;
		while(stormtroopers.IM<0 || stormtroopers.IM>1)
			cin>>stormtroopers.IM;
		cin>>stormtroopers.FA;
		while(stormtroopers.FA<0 || stormtroopers.FA>1)
			cin>>stormtroopers.FA;
		if((stormtroopers.IM+stormtroopers.FA)/2>GA){
			GA=(stormtroopers.IM+stormtroopers.FA)/2;
			melhor=stormtroopers.identificacao;
		}
		cin>>stormtroopers.identificacao;
	}
	while(stormtroopers.identificacao!=0);
	cout<<"\nStormtrooper escolhido: "<<melhor;
	cout<<"\nGA = "<<GA;
	return 0;
}
