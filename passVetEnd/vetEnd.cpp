 #include<iostream>
 using namespace std;
 
 int main()
 {
 	struct cad
 	{
 	char nome[31];
	};
	cad funcionario[3];
	cout<<"\n\nEndereco da estrutura(nem coloquei o &) : "<<funcionario;
	cout<<"\n\nEndereco da 1a variavel da estrutura    : "<<&funcionario[0];
	cout<<"\n\nEndereco da 2a variavel da estrutura    : "<<&funcionario[1];
	cout<<"\n\nEndereco da 3a variavel da estrutura    : "<<&funcionario[2];
	cout<<"\n\n";
	system("pause");
	return(0);
 }
