#include<iostream>
using namespace std;

float num1, num2; //variaveis globais

void troca();
void dobra();

int main()
{
	cout<<"\nNumero 1: ";
	cin>>num1;
	cout<<"\nNumero 2: ";
	cin>>num2;
	cout<<"\nInicialmente: "<<num1<<"\t"<<num2;
	troca();
	cout<<"\nApos a chamada da troca(): "<<num1<<"\t"<<num2;
	dobra();
	cout<<"\nApos a chamada da dobra(): "<<num1<<"\t"<<num2;
	cout<<"\n\n";
	system("pause");
	return 0;
}
void troca()
{
	dobra();
	num1+=num2;
	num2=num1-num2;
	num1=num1-num2;
}
void dobra()
{
	num1*=2;
	num2*=2;
}
