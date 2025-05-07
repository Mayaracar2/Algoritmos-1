#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int N;
	float soma=0;
	
	cin>>N;
	
	for(int i=1; i<N; i++){
		soma=soma+1.0/i;
	}
	cout<<fixed<<setprecision(4)<<soma<<endl;
	return 0;
}
