#include<iostream>
using namespace std;
int main()
{
	struct exemplo
	{
		int ninsc;;
		char nome[31];
	}aux,candidatos[]={1989, "JOAO RENATO",1962, "MARIA TEREZA"};
	cout<<"\nAntes da comparacao\n";
	cout<<"\n"<<candidatos[0].ninsc<<"\t"<<candidatos[0].nome;
	cout<<"\n"<<candidatos[1].ninsc<<"\t"<<candidatos[1].nome;
	if(candidatos[0].ninsc>candidatos[1].ninsc)
	{
		aux=candidatos[0];
		candidatos[0]=candidatos[1];
		candidatos[1]=aux;
	}
	cout<<"\n\nApos a comparacao\n";
	cout<<"\n"<<candidatos[0].ninsc<<"\t"<<candidatos[0].nome;
	cout<<"\n"<<candidatos[1].ninsc<<"\t"<<candidatos[1].nome;
	cout<<"\n\n";
	system("pause");
}
