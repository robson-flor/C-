#include <iostream>
using namespace std;

int main()
{
	struct aviao
	{
		char nomePassageiro[21], origem[15], destino[15], numeroPassagem[15], identidade[15], telefone[15];
		
	}passageiro1={"Mr Lopes, Joao", "Brasil", "Londres", "Gol 1234", "IF222222", "23232323232"},
 	 passageiro2={"Mr Oliveira, Joao", "Brasil", "Londres", "Gol 1234", "IF222222", "23232323232"},
	 passageiro3={"Mr Silva, Joao", "Brasil", "Londres", "Gol 1234", "IF222222", "23232323232"};
	 
//limpando a tela
	system("cls");
	cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\nNome: "<<passageiro1.nomePassageiro;
	cout<<"\nOrigem: "<<passageiro1.origem<<"\t\tDestino :"<<passageiro1.destino;
	cout<<"\nNumero da passagem: "<<passageiro1.numeroPassagem<<"\tIdentidade: "<<passageiro1.identidade<<"\tTelefone: "<<passageiro1.telefone;
	cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	
	cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\nNome: "<<passageiro1.nomePassageiro;
	cout<<"\nOrigem: "<<passageiro1.origem<<"\t\tDestino :"<<passageiro1.destino;
	cout<<"\nNumero da passagem: "<<passageiro1.numeroPassagem<<"\tIdentidade: "<<passageiro1.identidade<<"\tTelefone: "<<passageiro1.telefone;
	cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	
	cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\nNome: "<<passageiro1.nomePassageiro;
	cout<<"\nOrigem: "<<passageiro1.origem<<"\t\tDestino :"<<passageiro1.destino;
	cout<<"\nNumero da passagem: "<<passageiro1.numeroPassagem<<"\tIdentidade: "<<passageiro1.identidade<<"\tTelefone: "<<passageiro1.telefone;
	cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\n";
	system("pause");
}

