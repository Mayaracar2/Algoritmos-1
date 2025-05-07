#include<iostream>
#include<iomanip>
using namespace std;
void convert(float F, float &C, float &K){
	C=(F-32)*5/9;
	K=C+273;
}
int main()
{
	float Fahrenheit, Celsius, Kelvin;
	
	cin>>Fahrenheit;
	convert(Fahrenheit, Celsius, Kelvin);
	cout<<fixed<<setprecision(2)<<"Celsius: "<<Celsius<<endl;
	cout<<fixed<<setprecision(2)<<"Kelvin: "<<Kelvin;
	return 0;
}
