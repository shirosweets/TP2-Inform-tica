/*
A partir de laño 1983 en Argentina se ha vivido bajo democracia. Los periodos presidenciales antes del año 1994 eran de 6 años pero en dicho año pasaron a ser de 4 años.  El año 1983 y el año 1995 fueron de elecciones presidenciales.

Sabiendo esto, realice un programa que solicite que se ingrese por teclado un numero entero que representa a un año y en función del valor ingresado muestre por pantalla uno de los siguientes mensajes:

   - "Elecciones presidenciales" si:

                                               - El año ingresado es 1983 o 1995

                                               - El año es mayor a 1983, menor a 1995 y la cantidad de años que pasaron desde 1983 es múltiplo de 6

                                               - El año es mayor a 1995 y la cantidad de años que pasaron desde 1995 es múltiplo de 4
*/

#include <iostream>
using namespace std;

int main()
{
	int anno, cant1, cant2; //1983 1995 1989 2003
	cin>>anno;
	//cant1=anno%6;
	cant1=(anno-1983)%6;
	cant2=(anno-1995)%4;
	//cant2=anno%4;
	if (anno== 1983 || anno==1995)
	{
		cout<<"Elecciones presidenciales";
	}
	else if (anno>1983 && anno<1995 && cant1==0)
	{
		cout<<"Elecciones presidenciales";
	}
	else if (anno>1995 && cant2==0)
    {
		cout<<"Elecciones presidenciales";
	}
}