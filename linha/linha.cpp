#include <iostream>
using namespace std;
void linha(char c, int n);
int main()
{
	cout<<"\nESTACIO\n";
	linha('=', 7);
	cout<<"\nESTRUTURAS DE DADOS\n";
	linha('*', 19);
	cout<<"\nENSINO A DISTANCIA\n";
	linha('@', 18);
	cout<<"\n\n";
	system("pause");
	return 0;
}
void linha(char c, int n)
{
	for(int x=1; x<=n; x++)
	cout<<c;
}
