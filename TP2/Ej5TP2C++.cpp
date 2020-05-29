/*
Un número cuadrado perfecto es un número entero que es el cuadrado de algún otro; dicho de otro modo, es un número cuya raíz cuadrada es un número natural.

Un número es un cuadrado perfecto si se puede ordenar en una figura cuadrada. Por ejemplo, 9 es un número cuadrado perfecto ya que puede ser escrito como 3 × 3, y se puede ordenar del siguiente modo:
32 = 9 	Square number 9.png

 

Realizar un programa que solicite que se ingrese un numero entero por teclado y muestre por pantalla alguno de los siguientes mensajes:

  - "El numero ingresado es cuadrado" Si el numero ingresado es positivo y su raíz cuadrada es un numero entero.

  - "El numero ingresado no es cuadrado" En caso contrario
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ent, ent1;
    cin>>ent;
    
    
    ent1=sqrt(ent);
    if(ent>0)
    {
		if(ent1*ent1==ent)
    		cout<<"El numero ingresado es cuadrado"<<endl;
    
    else
    	cout<<"El numero ingresado no es cuadrado"<<endl;
	}
    
    return 0;    
}