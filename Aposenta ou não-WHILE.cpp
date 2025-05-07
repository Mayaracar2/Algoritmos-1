#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	int i, t, cont=0, j=1;
	
	while(j<=3){
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
		j++;
	}
	cout<<cont;
	return 0;
}
