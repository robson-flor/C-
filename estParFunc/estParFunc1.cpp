#include<iostream>
using namespace std;

struct cad      //definicao de cad
{
	int matricula;
	float CR;
};

void Exibe(cad AL);  //funcao com parametro que eh uma estrutura

int main()
{
	cad aluno;     //declaracao de aluno
	cout<<"\nMatricula do aluno:   ";
	cin>>aluno.matricula;
	cout<<"\nDigite CR:  ";
	cin>>aluno.CR;
	Exibe(aluno);  //chama a funcao
	//saida
	return(0);
}
void Exibe(cad AL)
{
	system("cls");
	cout<<"\nMatricula do aluno: "<<AL.matricula<<"\tCR: "<<AL.CR;
	cout<<"\n\n";
	system("pause");
}
