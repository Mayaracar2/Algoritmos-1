#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float M[3][3], soma1=1, soma2=1;
	
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++){
			cin>>M[i][j];
			if(i==j)
				soma1=soma1*M[i][j];
			if(i+j==2)
			{
				soma2=soma2*M[i][j];
			}
		}
	cout<<"Matriz";	
	for(int i=0; i<3; i++){
		cout<<endl;
		for(int j=0; j<3; j++)
			cout<<fixed<<setprecision(4)<<M[i][j]<<" ";
		
	}
	cout<<endl;
	cout<<fixed<<setprecision(4)<<"Determinante de M = "<<soma1-soma2<<endl;
	cout<<"Transposta de M"<<endl;
	for(int j=0; j<3; j++){
		cout<<endl;
		for(int i=0; i<3; i++)
			cout<<fixed<<setprecision(4)<<M[i][j]<<" ";
		
	}
	
			
	return 0;
}
