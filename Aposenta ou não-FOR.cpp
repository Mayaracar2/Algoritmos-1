#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	int i, t, cont=0;
	
	for(int j=1; j<=3; j++){
		cin>>i>>t;
		if(i>=65 || t>=30){
			cout<<"O funcionario esta qualificado..."<<endl;
			cont++; 
		}
		else if(i>=60 && t>=25){
			cout<<"O funcionario esta qualificado..."<<endl;
			cont++; 
		}
		else
		{
			cout<<"O funcionario ainda nao esta qualificado"<<endl;
		}
	}
	cout<<cont;
	return 0;
}
