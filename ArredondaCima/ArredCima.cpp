#include <iostream>
#include "minhas.h"
using namespace std;
int main()
{
	double notas[5]={6.5,9.2,7.9,8.3,10};
	cout<<"\nRelacao das notas originais\n";
	for(int x=0; x<5;x++)
		cout<<notas[x]<<"\t";
		arredonda(notas, 5);
	cout<<"\n\nRelacao das notas arredondads para cima\n";
	for(int x=0; x<5;x++)
		cout<<notas[x]<<"\t";
	cout<<"\n\nMedia da turma: "<<media(notas, 5);
	cout<<"\n\nTotal de notas maiores que 8: "<<contaMaioresQue8(notas, 5);
	cout<<"\n\n;"
	system("pause");
	return 0;
}
