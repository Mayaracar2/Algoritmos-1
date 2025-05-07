#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char** argv)
{
	int L=0, C=0, R1=0, R2=0, X;
	char saida;
	
	cin>>L>>C>>R1>>R2;
	
	for(L==0 && C==0 && R1==0 && R2==0;){
		if(L==0 && C==0 && R1==0 && R2==0){
			saida='N';
			cout<<saida<<endl;
			if(R1>R2){
				X=R1+R1;
			}
			else
			{
				X=R2+R2;
			}
			if(X<=L && X<=C){
				if(sqrt(pow((L-R2-R1),2)+pow((C-R2-R1),2))>=R1+R2){
				saida = 'S';
				cout<<saida<<endl;
			}
			}
		}
	}
	return 0;
}
