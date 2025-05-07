#include<iostream>
using namespace std;

struct dados
{
        string nome;
        int n1;
        int n2;
        int n3;
        int n4;
        int soma = 0;
        
}pos[100];

int strongest(dados pos[], int nAtletas)
{
    int soma = 0;
    int winner;
    int p;
    winner = pos[0].soma;
    
    for(int i=1;i<nAtletas;i++)
    {
        if(pos[i].soma > winner){
            winner = pos[i].soma;
            p = i;
        }
    }
    return p;
}

int main()
{
    
    int N; 
    int pwinner;
    
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin.ignore();
        getline(cin, pos[i].nome);
        cin >> pos[i].n1 >> pos[i].n2 >> pos[i].n3 >> pos[i].n4;
        pos[i].soma = pos[i].soma + pos[i].n1 + pos[i].n2 + pos[i].n3 + pos[i].n4;
    }
    
    pwinner = strongest(pos, N);
    
    cout << "Vencedor: " << pos[pwinner].nome << endl;
    
    return 0;
}
