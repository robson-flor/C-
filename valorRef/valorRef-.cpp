#include <iostream>
using namespace std;

int a,b;

void dobro(int x){    //x passado por valor
     x=2*x;
}
int triplo(int y){   //y passado por valor
   return 3*y;
}
void altera(int x, int &y)  {   //x passado por valor e  y passado por referencia
    x=x+a;
    y=x+b;
}   
       
int main (){
    a=2;
    b=3;
    dobro(a);
    b=triplo(b);
    altera(a,b);
    cout<< a << " e " << b << endl;
}
