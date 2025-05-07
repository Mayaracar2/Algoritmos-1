#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	int N;
	float S=1;
	
	cin>>N;
	
	for(int i=2; i<=N; i++){
		S=S*i;
	}
	cout<<S<<endl;
	return 0;
}
