#include<iostream>
using namespace std;
void insere(int codigo[], int &t, int tamanho);
void exibe(int codigo[], int t);
void elemento(int codigo[], int t);
int main()
{
	int tam, codigoProduto[5],op;
	
		//inicializacao
		tam = 0;
	do
	{
		system("cls");
		cout<<"\nMenu - LISTA \n";
		cout<<"\n0 - REINICIAR A LSITA";
		cout<<"\n1 - Inserir codigo na LISTA";
		cout<<"\n2 - Exibir LISTA";
		cout<<"\n3 - Exibe tamanho da LISTA";
		cout<<"\n4 - Exibe um elemento da lista";
		cout<<"\n5 - Sair";
		cout<<"\nOpcao: ";
		cin>>op;
		system("cls");
		switch(op)
		{
			case 0: //reinicializacao
					tam = 0;
					break;
					
			case 1: insere(codigoProduto,tam,5);
			
			case 2: exibe(codigoProduto,tam);
					break;
					
			case 3: cout<<"\nTamanho da Lista: "<<tam;
					break;
					
			case 4: elemento(codigoProduto, tam);
					break;
					
			case 5: cout<<"\nFinalizando o programa da LISTA\n";
			
			default: cout<<"\nOpcao invalida\n";
		}
		cout<<"\n\n"; system("pause");	
	}while(op !=5);
}

void insere(int codigo[], int &t, int tamanho)
{
	int prod;
	if(tamanho == t)
		cout<<"\nAtencao! Lista cheia\n";
	else
	{
		cout<<"\nDigite codigo do produto a ser inserido: ";
		cin>>prod;
		codigo[t] = prod;
		t++;
	}
}

void exibe(int codigo[], int t)
{
	int x;
	if (t == 0)
		cout<<"\nAtencao! Lista vazia\n";
	else
		cout<<"\nRelacao dos codigos\n";
		for(x = 0; x < t; x++)
			cout<<"\n"<<codigo[x];
}

void elemento(int codigo[], int t)
{
	int prod,posicao;
	if(t == 0)
		cout<<"\nAtencao! Lista vazia\n";
	else
		{
			cout<<"\nQual a posicao que deseja?";
			cin>>posicao;
			posicao--;
			if(posicao>=t)
				cout<<"\nAtencao! Nenhum codigo armazenado ou posicao inexistente\n";
			else
				cout<<"\nCodigo: "<<codigo[posicao]<<"\n";		
		}
}

