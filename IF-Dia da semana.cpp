#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	//declaração de variaveis
	  int m, d, a, s;
	  double n;
	//entrada de dados
	  cin>>d>>m>>a;
	//estrutura de decisão
	  if(m>2)
	  {
	  	n=int(365.25*a)+int(30.6*(m+1))-621049+d;
	  }
      else{
        n=int(365.25*(a-1))+int(30.6*(m+13))-621049+d;
       }
       
      if(n<36523)
	  {
	  	s=round(((n/7)-int(n/7))*7)+3;
	  }
        
      if(36523<=n && n<73048)
	  {
	  	s=round(((n/7)-int(n/7))*7)+2;
	  }
	    
	  if(n>=73048)
	  {
	  	s=round(((n/7)-int(n/7))*7)+1;
	  }
	     

	  switch(s){
		  case 1:
		  	cout<<"domingo"<<endl;
		  	break;
		   case 2:
		  	cout<<"segunda-feira"<<endl;
		  	break;
		   case 3:
		  	cout<<"terça-feira"<<endl;
		  	break;
		   case 4:
		  	cout<<"quarta-feira"<<endl;
		  	break;
		   case 5:
		  	cout<<"quinta-feira"<<endl;
		  	break;
		   case 6:
		  	cout<<"sexta-feira"<<endl;
		  	break;
		   case 7:
		  	cout<<"sabado"<<endl;
		  	break;
	  }
	  
	return 0;
}
