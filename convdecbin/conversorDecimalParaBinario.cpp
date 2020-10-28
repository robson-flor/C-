#include<iostream>
#define TAM 40
using namespace std;
void empilha(int p[], int &t, int v);
int desempilha(int p[], int &t, int &v);
int main()
{ float n;//para possibilitar a entrada de numero maior que o inteiro permite
  int num, resto, pilha[TAM],sinal,topo=-1; //Inicializacao da pilha atraves de topo=-1
  system("color 2f");
  cout<<"\n###########################################################";
  cout<<"\n###                                                     ###";
  cout<<"\n###  converte numero da base decimal para base binaria  ###";
  cout<<"\n###                                                     ###";
  cout<<"\n###########################################################\n";	
  cout<<"\nDigite numero positivo ate 2147483520. Qualquer outro, sai: ";
  cin>>n;
  if(n>2147483520  || n <-2147483520)
  	exit(0); //Limita intervalo de inteiro do Dev-Cpp, embora seja maior
  else
  	num=(int)n; //converte real para inteiro
  while(num>=0)
  {
  	do //inicio do trecho que empilha os restos que irao gerar o nuero binario
  	{
  		resto= num%2;
  		empilha(pilha,topo,resto);
  		num/=2;
	  }while(num>0); //fim do trecho de empilhamento
	  cout<<"\nConvertido para binario: ";
	  sinal=desempilha(pilha,topo,resto); //inicio do trecho que desempilha todos
	  while(sinal ==1) //os restos que irao exibir o numero binario
	  {
	  	cout<<resto;
	  	sinal=desempilha(pilha,topo,resto);
	  }//fim do trecho de desempilhamento
	  topo=-1;
	  cout<<"\n\nDigite numero positivo ate 2147483520. Qualquer outro, sai: ";
	  cin>>n; if(n>2147483520 || n<-2147483520) exit(0); //maximo permitido no Dec-Cpp
	  else num=(int)n;
  }
  cout<<"\n\n";
  system("pause");
}
void empilha(int p[], int &t, int v)
{
	if(t==TAM-1) //este teste nao eh necessario porque a entrada ja esta limitada
		cout<<"\nATENCAO! Pilh cheia\n"; //mantido para usar o mesmo trecho
	else
	{
		t++; //atualiza o topo
		p[t]=v; //pilha recebe valor
	}
}

int desempilha(int p[], int &t, int &v)
{
	if(t==-1)
		return 0;
	else
	{
		v=p[t]; //guarda o valor do topo
		t--; //atualiza o topo
		return 1;
	}
}









