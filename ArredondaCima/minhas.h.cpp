#include <cmath>
void arredonda(double a[], int tam)
{
 for(int x=0; x<tam;x++)
 a[x]=ceil(a[x]);
}
double media(double n[], int tam)
{
 double soma=0;
 for(int x=0; x<tam;x++)
 soma+=n[x];
 return soma/tam;
}
int contaMaioresQue8(double num[], int tam)
{
 int conta=0;
 for(int x=0; x<tam;x++)
 if(num[x]>8)
 conta++;
 return conta;
} 
