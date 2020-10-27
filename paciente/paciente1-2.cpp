#include<iostream>
using namespace std;
int main()
{ //definicao da estrutura
	struct cad
	{
		char nomePaciente[31], classificacao[25], telefone[14];
		float altura, peso, imc;
	};
	cad paciente1, paciente2; //declaracao das variaveis estruturas
	// primeiro paciente
	cout<<"\nNome do 1o paciente: "; cin.getline(paciente1.nomePaciente, 31);
	cout<<"\nDigite Peso, Altura e IMC, pressionando enter apos cada um\n";
	cin>>paciente1.peso>>paciente1.altura>>paciente1.imc;
	cin.get(); //retira o enter deixado pela variavel numerica
	cout<<"\nDigite a classificacao: "; cin.getline(paciente1.classificacao, 25);
	cout<<"\nDigite telefone: "; cin.getline(paciente1.telefone, 25);
	
	//segundo paciente
	cout<<"\nNome do 2o paciente: "; cin.getline(paciente2.nomePaciente, 31);
	cout<<"\nDigite Peso, Altura e IMC, pressionando enter apos cada um\n";
	cin>>paciente2.peso>>paciente2.altura>>paciente2.imc;
	cin.get(); //retira o enter deixado pela variavel numerica
	cout<<"\nDigite a classificacao: "; cin.getline(paciente2.classificacao, 25);
	cout<<"\nDigite telefone: "; cin.getline(paciente2.telefone, 25);
	
	//limpando a tela
	system("cls");
	cout<<"\nNome do 1o Paciente: "<<paciente1.nomePaciente;
	cout<<"\nPeso\tAltura\tIMC\tClassificacao";
	cout<<"\n"<<paciente1.peso<<"\t"<<paciente1.altura<<"\t"<<paciente1.imc<<"\t"<<paciente1.classificacao<<"\n";
	cout<<"\nNome do 2o Paciente: "<<paciente2.nomePaciente;
	cout<<"\nPeso\tAltura\tIMC\tClassificacao";
	cout<<"\n"<<paciente2.peso<<"\t"<<paciente2.altura<<"\t"<<paciente2.imc<<"\t"<<paciente2.classificacao<<"\n";
	system("pause");
}

