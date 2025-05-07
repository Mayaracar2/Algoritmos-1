#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int C, N;
	double X[100], soma, media, cont;
	
	cin>>C;
	for(int i=1; i<=C; i++){
		cin>>N;
		soma=0;
		cont=0;
		for(int j=1; j<=N; j++){
			cin>>X[j];
			soma+=X[j];
		}
		media=soma/N;
		for(int k=1; k<=N; k++){
			if(X[k]>media){
				cont++;
			}
		}
		cout<<fixed<<setprecision(3)<<cont*100/N<<"%"<<endl;
	}
	return 0;
}
