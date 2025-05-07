#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main()
{
 
 
    double A, B, C, D, R1, R2;
 
    cin>>A;
    cin>>B;
    cin>>C;
  
    D=pow(B,2)-(4*A*C);
    R1=((-B+sqrt(D))/(2*A));
    R2=((-B-sqrt(D))/(2*A));
  
    if(D<0 || A==0)
    	cout<<"Impossivel calcular"<<endl;
    else{
        cout<<setprecision(5)<<fixed<<"R1 = "<<R1<<endl;
        cout<<setprecision(5)<<fixed<<"R2 = "<<R2<<endl;
	}
    return 0;
}
