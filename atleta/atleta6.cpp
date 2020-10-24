#include <iostream>
#include <cstring>
using namespace std;
int main()
{  //definicao da estrutura
	struct cadastro
	{
		char nomeAtleta[31], esporte[25], categoria[15], telefone[15];
		float ajudaCusto;
		int anoNas;
	};
	cadastro atleta; //declara atleta como uma variavel tipo cadastro
	//atribui valores aos membros
	strcpy(atleta.nomeAtleta, "Joao Lopes");
	strcpy(atleta.esporte, "Volley");
	strcpy(atleta.categoria, "Adulto");
	strcpy(atleta.telefone, "22948494944");
	atleta.ajudaCusto=2000;
	atleta.anoNas=1991;
	
	//limpando a tela
	system("cls");
	cout<<"\n=======================================================";
	cout<<"\nNome :"<<atleta.nomeAtleta<<"               ";
	cout<<"\nEsporte: "<<atleta.esporte<<"\t\tCategoria : "<<atleta.categoria<<"                 ";
	cout<<"\nValor da ajuda de custo : "<<atleta.ajudaCusto<<"         ";
	cout<<"\nTelefone: "<<atleta.telefone<<"\t\tAno_nas: "<<atleta.anoNas<<"         ";
	cout<<"\n=======================================================";
	cout<<"\n\n";
	system("pause");
	
}
