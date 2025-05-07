#include<iostream>
using namespace std;
int sinal(int n){
	if(n<0)
		return -1;
	if(n==0)
		return 0;
	if(n>0)
		return 1;
}
int main()
{
	int x;
	
	cin>>x;
	
	if(sinal(x)==-1)
		cout<<"Negativo";
	if(sinal(x)==0)
		cout<<"Zero";
	if(sinal(x)==1)
		cout<<"Positivo";
	
	return 0;
}
