/*
Realice un programa C++ que solicite al usuario el ingreso de un número entero. Su programa debe evaluar si el valor correspondiente a las últimas 3 cifras del número ingresado es divisible por 3. En tal caso , se debe imprimir el mensaje "Las ultimas 3 cifras suman X y son divisibles por 3" donde X es la suma de las 3 últimas cifras. En caso contrario, se debe imprimir "Las ultimas 3 cifras suman X y no son divisibles por 3" dónde X es la suma de las 3 últimas cifras. Considere que si el número tiene menos de 3 cifras se completa con 0 por delante. 

Ayuda:

    Recuerde que el último dígito de un número n se extrae haciendo n%10. El penúltimo (n/10)%10 y así sucesivamente.
    Recuerde que un número es divisible por 3 si la suma de sus dígitos son divisibles por 3.
*/


#include <iostream>
using namespace std;

int main()

{      
	int a, b, c, d, x, res;
	cin>>d;
	c=d%10; //ultima cifra - primer cifra
	//cout<<"c: "<<c<<endl;
	b=(d/10)%10; //penultima cifra - segunda cifra
	//cout<<"b: "<<b<<endl;
	a=(d/100)%10; //antepenultima cifra - tercer cifra
	//cout<<"a: "<<a<<endl;
	x=(a+b+c);
	res=x%3; 
	if (res==0)
	{
		cout<<"Las ultimas 3 cifras suman "<< x <<" y son divisibles por 3";
	}
	else 
	{
		cout<<"Las ultimas 3 cifras suman "<< x <<" y no son divisibles por 3"; 
	}
	return 0;
}