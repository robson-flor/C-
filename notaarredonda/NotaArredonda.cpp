#include <iostream>
#include <cmath>
using namespace std;

void arredonda(double a[], int tam);

int main()
{
	double notas[5];
	for(int x=0; x<5; x++)
	{
		cout<<"\nNota "<<x+1<<": ";
		cin>>notas[x];
	}
	cout<<"\nRelacao das notas originais\n";
	for (int x=0; x<5;x++)
		cout<<notas[x] <<"\t";
		arredonda(notas, 5);
	cout<<"\nRelacao das notas arredondadas para cima\n";
	for(int x=0; x<5;x++)
		cout<<notas[x]<<"\t";
	cout<<"\n\n";
	system("pause");
	return 0;
}
void arredonda(double a[], int tam)
{
	for(int x=0; x<tam;x++)
		a[x] =ceil(a[x]);
}
