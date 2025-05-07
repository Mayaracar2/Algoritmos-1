#include<iostream>
using namespace std;
int main()
{
	int QR[3][3], lin[9], soma=0;
	
	for(int j=0; j<3; j++)
		for(int k=0; k<3; k++){
			cin>>lin[j+k];
			while(lin[j+k]!=0 && lin[j+k]!=1)
				cin>>lin[j+k];
				QR[j][k]=lin[j+k];
				soma+=QR[j][k];
		}
		if(soma==5)
			cout<<"MASCULINO";
		if(soma==4)
			cout<<"FEMININO";
				
	return 0;
}
