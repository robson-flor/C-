#include <iostream>
using namespace std;
struct data
{
	int dia, mes, ano;
};
int main()
{
	struct pagto
	{
		int codigo;
		float valor;
		data venc;
	}promissorias[2];
		int x;
		for(x=0; x<2;x++)
		{
			cout<<"\nCodigo: ";
			cin>>promissorias[x].codigo;
			cout<<"\nValor a ser pago: ";
			cin>>promissorias[x].valor;
			cout<<"\nDigite dia :";
			cin>>promissorias[x].venc.dia;
			cout<<"\nDigite mes :";
			cin>>promissorias[x].venc.mes;
			cout<<"\nDigite ano :";
			cin>>promissorias[x].venc.ano;
		}
		system("cls");
		cout<<"\nCodigo\tValor\tData de Vencimento\n";
		for(x=0; x<2;x++)
		cout<<"\n"<<promissorias[x].codigo<<"\t"<<promissorias[x].valor<<"\t"<<promissorias[x].venc.dia<<"/ "<<promissorias[x].venc.mes<<" /"
		<<promissorias[x].venc.ano;
		cout<<"\n\n";
		system("pause");
}
