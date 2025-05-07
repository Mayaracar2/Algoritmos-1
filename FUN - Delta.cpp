#include<iostream>
#include<cmath>
using namespace std;
float delta(float A, float B, float C){
	return pow(B,2)-4*A*C;
}
int main()
{
	float a, b, c;
	cin>>a>>b>>c;
	while(a==0)
		cin>>a>>b>>c;
	cout<<"delta = "<<delta(a, b, c);
	return 0;
}
