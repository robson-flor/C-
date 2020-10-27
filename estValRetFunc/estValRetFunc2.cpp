#include<iostream>
using namespace std;

struct cad
{
	int matricula;
	float CR;
};

cad Entrada();
//prototipo da funcao Entrada sem parametros
//do tipo cad que eh um struct e com retorno

int main()
{
	cad aluno;    //declaracao de aluno
	aluno = Entrada();  //a estrutura aluno recebe o retorno da funcao Entrada
	//saida
	system("cls");
	cout<<"\nMatricula do aluno: "<<aluno.matricula<<"\tCR: "<<aluno.CR;
	cout<<"\n\n";
	system("pause");
	return(0);
}

cad Entrada()
{
	cad temp;
	cout<<"\nMatricula do aluno: ";
	cin>>temp.matricula;
	cout<<"\nDigite CR: ";
	cin>>temp.CR;
	return(temp); // retorna uma estrutura
}
