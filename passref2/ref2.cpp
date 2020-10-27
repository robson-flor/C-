#include <iostream>
using namespace std;

struct cad      //definicao de cad
{
	char nome[31];
	int idade;
};

void idade2020(int &);

int main()
{
	cad atleta={"Joao Renato", 21};    //declaracao/atribuicao de atleta
	cout<<"\nAntes da chamada da funcao";
	cout<<"\nNome do atleta: "<<atleta.nome<<"\tIdade em 2010: "<<atleta.idade;
	idade2020(atleta.idade);
	cout<<"\n\nDepois da chamada da funcao";
	cout<<"\nNomoe do atleta: "<<atleta.nome<<"\tIdade em 2020: "<<atleta.idade;
	cout<<"\n\n";
	system("pause");
	return(0);
}

void idade2020(int &id)
{
	id=id+10;
}
