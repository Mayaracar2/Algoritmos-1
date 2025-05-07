#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char** argv)
{
	char nome1[51], nome2[51], nome3[51];
	
	cin>>nome1;
	
	if(strcmp(nome1,"vertebrado")==0){
		cin>>nome2;
		if(strcmp(nome2,"ave")==0){
			cin>>nome3;
			if(strcmp(nome3,"carnivoro")==0)
				cout<<"aguia"<<endl;
			if(strcmp(nome3,"onivoro")==0)
				cout<<"pomba"<<endl;
		}
		if(strcmp(nome2,"mamifero")==0){
			cin>>nome3;
			if(strcmp(nome3,"herbivoro")==0)
				cout<<"vaca"<<endl;
			if(strcmp(nome3,"onivoro")==0)
				cout<<"homem"<<endl;
		}
	}
	
	if(strcmp(nome1,"invertebrado")==0){
		cin>>nome2;
		if(strcmp(nome2,"inseto")==0){
			cin>>nome3;
			if(strcmp(nome3,"hematofago")==0)
				cout<<"pulga"<<endl;
			if(strcmp(nome3,"herbivoro")==0)
				cout<<"lagarta"<<endl;
		}
		if(strcmp(nome2,"anelideo")==0){
			cin>>nome3;
			if(strcmp(nome3,"hematofago")==0)
				cout<<"sanguessuga"<<endl;
			if(strcmp(nome3,"onivoro")==0)
				cout<<"minhoca"<<endl;
		}
	}
	
	return 0;
}
