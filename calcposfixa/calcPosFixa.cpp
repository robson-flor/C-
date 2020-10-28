#include<iostream>
#include<cstdlib>
#define TAM 100
using namespace std;
void push(float p[], int &t, float v);
float pop(float p[], int &t);
int main()
{
	int t = -1;
	float a, b, p[TAM];
	char s[10];
	
	system("color f1");
	cout<<"\n**********************************************";
	cout<<"\n*   Calculadora para 4 operacoes pos-fixa    *";
	cout<<"\n*     Digite numero ou operadores              *";
	cout<<"\n*      Digite s para sair                      *";
	cout<<"\n**********************************************";
	
	do
	{
		cout<<": ";
		cin>>s;
		switch(s[0])
		{
			case '+':
				a = pop(p, t);
				b = pop(p, t);
				cout<<"\n"<<a+b<<"\n";
				push(p, t, a+b);
				break;
				
			case '-':
				a = pop(p, t);
				b = pop(p, t);
				cout<<"\n"<<b-a<<"\n";
				push(p, t, b-a);
				break;
				
			case '*':
				a = pop(p, t);
				b = pop(p, t);
				cout<<"\n"<<a*b<<"\n";
				push(p, t, b*a);
				break;
				
			case '/':
				a = pop(p, t);
				b = pop(p, t);
				if(a==0)
					cout<<"\nDivisao por 0\n";
				else
				{
					cout<<"\n"<<b/a<<"\n";
					push(p, t,b/a);
				}
				break;
				
		default: push(p,t,atof(s));
		}
	}while(s[0]!='s');
	system("pause");
}

/* Insere o elemento na pilha*/
void push(float p[], int &t, float v)
{
	if(t==TAM-1)
		cout<<"\nATENCAO! Pilha cheia\n";
	else
	{
		t++; //atualiza o topo
		p[t]=v; //pilha recebe valor
	}
}

/*Remove o elemento da pilha*/
float pop(float p[], int &t)
{ float v;
	if(t == -1)
	{
		cout<<"\nATENCAO! Pilha vazia\n";
		return 0;
	}
	else
	{
		v=p[t]; // guarda o valor do topo
		t--; //atualiza o topo
		return v;
	}
}






