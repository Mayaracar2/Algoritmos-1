#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int i, X, cont=0;
	
	for(i=0; i<5; i++){
		cin>>X;
		if(X%2==0){
			cont++;
		}
		
	}
	cout<<cont<<" valores pares"<<endl;
	return 0;
