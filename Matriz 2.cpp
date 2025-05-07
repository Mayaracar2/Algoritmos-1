#include<iostream>
using namespace std;
int main()
{
	double A[3][3];
	int soma0=0, soma1=0, soma2=0;
	
	cout<<"Digite os 9 elementos da matriz A, uma linha por vez: "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>A[i][j];
			if(i==0)
				soma0+=A[i][j];
			if(i==1)
				soma1+=A[i][j];
			if(i==2)
				soma2+=A[i][j];
		}
	}
	cout<<endl<<"Elementos da matriz A:";
	for(int i=0; i<3; i++){
		cout<<endl;
		for(int j=0; j<3; j++)
			cout<<A[i][j]<<"\t";
	}	
	cout<<endl;
	cout<<"Soma linha 0: "<<soma0<<endl;
	cout<<"Soma linha 1: "<<soma1<<endl;
	cout<<"Soma linha 2: "<<soma2<<endl;
	cout<<"Diagonal principal: ";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(i==j){
				cout<<A[i][j];
				cout<<"\t";
			}
				
		}
	}
		
	cout<<endl;		
	
	return 0;
}
