#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void media(int a, int b, float &m){
	m=sqrt(a*b);
}
int main()
{
	int X, Y;
	float M;
	
	cin>>X>>Y;
	media(X, Y, M);
	cout<<fixed<<setprecision(2)<<"Media: "<<M;
	return 0;
}
