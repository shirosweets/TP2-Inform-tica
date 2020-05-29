/*
Resuelva el siguiente problema, usando exclusivamente estructuras de decisión simples y cualquier otro recurso de las unidades anteriores.

Se desea contar con un programa en C++ que le permita al usuario ingresar un número entero y le muestre si es mayor que  10 y múltiplo de  números primos menores que 10. Por ejemplo, si ingresa 30 debería indicar que es mayor que 10 y  múltiplo de números primos menores que 10. Además indicar cuáles y cuántos. Para el ejemplo: 2, 3 y 5. En total, 3 divisores.

Ejemplo:

Ingrese un numero entero mayor a 10: 30
El numero ingresado por usted: 30, es mayor que 10 y multiplo de numeros primos menores que 10:
De 2
De 3
De 5
Es multiplo de 3 numeros primos menores que 10

IMPORTANTE: La primera corrección de su programa es automática, por consiguiente su programa debe imprimir EXACTAMENTE lo que la consigna del ejercicio y los ejemplos de ejecución sugieren en caso contrario los test no pasarán. No olvide considerar espacios en blancos, saltos de línea, minúsculas y mayúsculas.
*/

#include<iostream>
using namespace std;
int main()
{
    int a, contar=0, b; 	//1-10 (2, 3, 5, 7)
    cin>>a;
    if (a>10)
    {
    	cout<<"El numero ingresado por usted: "<<a<<", es mayor que 10 y multiplo de numeros primos menores que 10:"<<endl;
	}
	else
	{
		cout<<"El numero ingresado por usted: "<<a<<", es menor que 10 y multiplo de numeros primos menores que 10:"<<endl;
	}
    if (a%2==0)
    {
    	cout<<"De 2"<<endl;
    	contar+=1;
	}
	if (a%3==0)
	{
		cout<<"De 3"<<endl;
		contar+=1;
	}
	if (a%5==0)
	{
		cout<<"De 5"<<endl;
		contar+=1;
	}
	if (a%7==0)
	{
		cout<<"De 7"<<endl;
		contar+=1;
	}
	b=contar;
    cout<<"Es multiplo de "<<b<<" numeros primos menores que 10";   
    return 0;
}