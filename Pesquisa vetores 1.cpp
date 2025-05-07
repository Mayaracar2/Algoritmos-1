#include<iostream>
using namespace std;
int main()
{
	int X[5], cont = 0;

	for(int i = 0; i < 5; i++)
	{
		cin >> X[i];
	}

	for(int j = 0; j < 5; j++)
	{
		if(X[j] == 0 && j != 0)
		{
			cout << "0 nas posicoes: " << endl;
			cout << j << endl;
			cont++;
		}

	}
	
	if(cont==0)
		cout<<"Nenhum elemento zero no vetor";
	return 0;
}
