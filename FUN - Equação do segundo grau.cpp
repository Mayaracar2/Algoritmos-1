#include<iostream>
#include<cmath>
using namespace std;
int raizes(float A, float B, float C, float &x1, float &x2){
	if( pow(B,2)-4*A*C<0)
		return 1;
	else
	{
		x1=(-B+sqrt(pow(B,2)-4*A*C))/(2*A);
		x2=(-B-sqrt(pow(B,2)-4*A*C))/(2*A);
	}
}
int main()
{
	float a, b, c, r1, r2;
	cin>>a>>b>>c;
	while(a==0)
		cin>>a>>b>>c;
	if(raizes(a, b, c, r1, r2)==1)
		cout<<"Nao a raizes"<<endl;
	else
	{
		raizes(a, b, c, r1, r2);
		if(r1==r2)
			cout<<"x = "<<r1;
		else{
			cout<<"x1 = "<<r1<<endl;
			cout<<"x2 = "<<r2;
		}
	}
	
	return 0;
}
