#include<iostream>
using namespace std;
float ideal(float h, char s)
{
	if(s=='M')
		return 72.7*h-58;
	if(s=='F')
		return 62.1*h-44.7;
}int main()
{
	float altura;
	char sexo;
	
	cin>>altura>>sexo;
	
	cout<<"Peso ideal = "<<ideal(altura, sexo)<<" kg";
	
	return 0;
}
